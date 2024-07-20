#include <iostream>
#include <stack>
using namespace std;

int main() {
  string str="CODING";
  stack<char> s;
  string res="";
  for(int i=0;i<str.size();i++){
    s.push(str[i]);
  }
  while(!s.empty()){
    res+=s.top();
    s.pop();
  }
  cout << "after reversing: " << res << endl;
  return 0;
}