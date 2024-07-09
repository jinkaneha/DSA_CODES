//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    //solved using sieve of eratostheneses!
   	    if(n<2) return 0;
   	    vector<bool> prime(n+1,true);
   	    long long sum=0;
   	    prime[0]=prime[1]=false;
   	    for(int i=2;i<=n;i++){
   	        if(prime[i]){//we are checking if i is marked as true
   	            sum+=i; // if its marked true just add to sum
   	            int j=i*2; // now mark all the multiples of i as false
   	            while(j<=n){
   	            prime[j]=false;
   	            j=j+i;
   	            }
   	            
   	        }
   	    }
   	    return sum;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends