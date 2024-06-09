#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;

  Node(){
    this->data=0;
    this->prev=NULL;
    this->next=NULL;
  }

  Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
  }
};
void print(Node* &head){
  Node*temp = head;
  while(temp!=NULL){
    cout << temp->data << " ";
    temp=temp->next;
  }
}
int getlength(Node* head){
  int len=0;
  Node* temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  return len;
}
void insertAtHead(Node* &head,Node* &tail,int data){
  Node* newNode=new Node(data);
  if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
  }
  newNode->next=head;
  head->prev=newNode;
  head=newNode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
  Node* newNode=new Node(data);
  if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
  }
  tail->next=newNode;
  newNode->prev=tail;
  tail=newNode;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
  Node* newNode=new Node(data);
  if(head==NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  int len=getlength(head);
  if(pos==1){
    insertAtHead(head,tail,data);
    return;
  }
  if(pos>len){
    insertAtTail(head,tail,data);
    return;
  }
  //if not first and last
  //step2:find prev and curr
  int i=1;
   Node* prevnode=head;
  while(i<pos-1){
   prevnode=prevnode->next;
   i++;
  }
  Node* curr=prevnode->next;
  //step3:
  prevnode->next=newNode;
  newNode->prev=prevnode;
  curr->prev=newNode->next;
  newNode->next=curr;
}

void deleteAtPosition(Node* &head,Node* &tail,int pos){
  if(head==NULL){
    cout << "theres nothing to delete";
    return;
  }
  if(head->next==NULL){
    Node* temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
    return;
  }
  if(pos==1){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;

  }
  int len=getlength(head);
  if(pos==len){
    Node* temp=tail;
    tail=tail->prev;
    temp->prev=NULL;
    tail->next=NULL;
    delete temp;
    return;
  }
  if(pos>len){
    cout << "no element" << endl;
  }
  //find left,right,curr
  int i=1;
  Node* left=head;
  while(i<pos-1){
    left=left->next;
    i++;
  }
  Node* curr=left->next;
  Node* right=curr->next;
  //perform'
  left->next=right;
  right->prev=left;
  curr->prev=NULL;
  curr->next=NULL;
  delete curr;
  return;

}


int main(){
  Node* head=NULL;
  Node* tail=NULL;
  insertAtHead(head,tail,300);
  insertAtHead(head,tail,200);
  insertAtHead(head,tail,100);
//  print(head);
//   cout << endl; 
  insertAtTail(head,tail,400);
  insertAtTail(head,tail,500);
  // print(head);
  // cout << endl;
  insertAtPosition(head,tail,1,99);
  insertAtPosition(head,tail,2,101);
  insertAtPosition(head,tail,7,401);
   insertAtPosition(head,tail,8,402);
  insertAtPosition(head,tail,10,600);
  print(head);
  cout << endl;

  //performing deletion
  deleteAtPosition(head,tail,1);
  print(head);
  deleteAtPosition(head,tail,9);
  cout << endl;
  print(head);
  return 0;
} 