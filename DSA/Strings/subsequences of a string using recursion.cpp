#include <iostream>
using namespace std;
void printsubsequences(string str,string output,int i){
    if(i==str.length()){
        cout << output << endl;
        return;
    }
    printsubsequences(str,output,i+1);
    output.push_back(str[i]);
    printsubsequences(str,output,i+1);

}
int main(){
    string str="neha";
    string output="";
    int i=0;
    printsubsequences(str,output,i);
}