
// #include <iostream>
// #include <stack>
// using namespace std;

// // Function to insert an element at the bottom of the stack
// void insertAtBottom(stack<int> &s, int target) {
//     if (s.empty()) {
//         s.push(target);
//         return;
//     }
//     int temp = s.top();
//     s.pop();
//     insertAtBottom(s, target);
//     s.push(temp);
// }

// // Function to reverse the stack
// void reverseStack(stack<int> &s) {
//     if (s.empty()) {
//         return;
//     }
//     int target = s.top();
//     s.pop();
//     reverseStack(s);
//     insertAtBottom(s, target);
// }

// int main() {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     reverseStack(s);

//     cout << "Printing reversed stack elements from top to bottom:" << endl;
//     while (!s.empty()) {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     return 0;
}
--gfg--//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insertatbottom(stack<int> &s,int target){
        if(s.empty()){
            s.push(target);
            return;
        }
        int temp=s.top();
        s.pop();
        insertatbottom(s,target);
        s.push(temp);
    }
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int target=St.top();
        St.pop();
        Reverse(St);
        insertatbottom(St,target);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends