class Solution {
public:
    int solve(int num){
        int ans=0;
        while(num>0){
            int digit=num%10;
            ans=ans + digit;
            num=num/10;
        }
        return ans;
    }
    int addDigits(int num) {
        while(num>9){
            num = solve(num);

        }
        return num;
    }
    
};