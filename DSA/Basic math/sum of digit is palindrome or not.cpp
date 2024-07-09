//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
        }
       int originalsum=sum;
     //  cout << originalsum << endl;
       int rev=0;
       while(sum>0){
           int digit=sum%10;
           rev=digit+rev*10;
           sum=sum/10;
       }
      // cout<<rev<<endl;
       return originalsum==rev ? 1 : 0;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends