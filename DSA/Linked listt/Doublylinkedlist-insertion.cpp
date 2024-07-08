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
int main(){
  Node* head=NULL;
  Node* tail=NULL;
  insertAtHead(head,tail,300);
  insertAtHead(head,tail,200);
  insertAtHead(head,tail,100);
  print(head);
  cout << endl;
  insertAtTail(head,tail,400);
  insertAtTail(head,tail,500);
  print(head);
  cout << endl;
  insertAtPosition(head,tail,1,99);
  insertAtPosition(head,tail,2,101);
  insertAtPosition(head,tail,7,401);
   insertAtPosition(head,tail,8,402);
  insertAtPosition(head,tail,10,600);
  print(head);
  return 0;
} 