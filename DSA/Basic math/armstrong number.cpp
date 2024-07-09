// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int original = n;
        int res=0;
        while(n>0){
            int digit=n%10;
            res=digit*digit*digit + res;
            n=n/10;
        }
        return res==original ? "Yes":"No";
    }
};