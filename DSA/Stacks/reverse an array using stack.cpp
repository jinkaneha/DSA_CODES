#include <iostream>
#include <stack>
using namespace std;

int main() {
  string str="neha";
  stack<char> s;
  string res="";
  for(int i=0;i<str.size();i++){
    s.push(str[i]);
  }
  while(!s.empty()){
    res+=s.top();
    s.pop();
  }
  cout << res << endl;
  return 0;
}