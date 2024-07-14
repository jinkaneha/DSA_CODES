#include <iostream>
using namespace std;
class Stack{
   private:
   int *arr;
   int top;
   int size;
   public:
   Stack(int size){
    arr=new int[size];
    this->size=size;
    top=-1;
   }
   void push(int data){
    if(size-top>1){
      top++;
      arr[top]=data;
    }
    else{
      cout << "Stack Overflow" << endl;
    }
   }
    void pop(){
      if(top==-1){
        cout << "Stack Underflow" << endl;
      }
      else{
        top--;
      }
    }
    int gettop(){
      if(top==-1){
        cout << "there is no top element" << endl;
      }
      else{
        return arr[top];
      }
      return 0;
    }
    int getsize(){
      return top+1;
    }
    void isempty(){
      if(top==-1){
        cout << "Stack is Empty";
      }  
      else{
        cout << "Stack not empty"; 
      }
    }
};

int main() {
  Stack s(10);
  s.push(20);
  s.push(10);
  return 0;
}
