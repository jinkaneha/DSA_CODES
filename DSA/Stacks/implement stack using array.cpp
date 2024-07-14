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
    bool isempty(){
      if(top==-1){
        return true;
      }  
      else{
        return false; 
      }
    }
};

int main() {
  Stack s(10);
  s.push(200);
  s.push(300);
  s.push(400);
  s.push(500);
  s.push(600);
  s.push(700);
  //cout << s.gettop() << endl;
  while(!s.isempty()){
    cout << s.gettop() << endl;
    s.pop();
  }
  cout << s.gettop() << endl;
  return 0;
}
