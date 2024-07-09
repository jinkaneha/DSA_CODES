//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long solve(long long A , long long B){
          while(A>0 && B>0){
            if(A>B){
                A=A-B;
            }
            else{
                B=B-A;
            }
        }
        return A>B ? A:B;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> result;
        long long ans=solve(A,B);
        long long lcm=A*B/ans;
        result.push_back(lcm);
        result.push_back(ans);
        return result;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends