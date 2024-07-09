class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n==1) return 2;
        for(int i=1;i<n;i++){
            int x = n*i;
            if(x%2==0){
                return x;
            }
        }
        return -1;
    }
};