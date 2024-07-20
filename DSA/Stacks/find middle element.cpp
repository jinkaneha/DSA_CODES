#include <iostream>
#include <stack>
using namespace std;

void printmiddleelement(stack<int> &s, int totalsize){
  //basecase
  if(s.size()==0){
    cout << "no element";
    return;
  }
  if(s.size()==totalsize/2+1){
    cout << s.top();
    return;
  }
  int temp=s.top();
  s.pop();
  //recursive call
  printmiddleelement(s,totalsize);
  //backtrack
  s.push(temp);

}
int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  int totalsize=s.size();
  printmiddleelement(s,totalsize);
 return 0;
 
}