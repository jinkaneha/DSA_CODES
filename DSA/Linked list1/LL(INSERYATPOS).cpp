#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
int findlength(Node* &head){
  int len=0;
  Node* temp=head;
  while(temp!=NULL){
    temp=temp->next;
    len++;
  }
  return len;

}
void insertAtPosition(int position,Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = tail = newNode;
        return;
    } 
    if(position==0){
      insertAtHead(head,tail,data);
      return;
    }
    int len=findlength(head);
    if(position>=len){
      insertAtTail(head,tail,data);
      return;
    }
    int i=1;
    Node* prev=head;
    while(i<position){
      prev=prev->next;
      i++;
    }
    Node* curr=prev->next;
    newNode->next=curr;
    prev->next=newNode;
}


void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtPosition(5,head, tail, 5);
    insertAtPosition(0,head, tail, 1);

    print(head);

    return 0;
}
