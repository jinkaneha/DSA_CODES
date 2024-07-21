class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=n*(n+1)/2;
        int actualtotal=0;
        for(int i=0;i<nums.size();i++){
            actualtotal+=nums[i];
        }
        return total-actualtotal;
        //second approach
        // class Solution {
        // public:
        //     int missingNumber(vector<int>& nums) {
        //         int n=nums.size();
        //         int total=n*(n+1)/2;
        //         int actualtotal=0;
        //         for(int i=0;i<nums.size();i++){
        //             actualtotal+=nums[i];
        //         }
        //         return total-actualtotal;
                
        //     }
        // };
    }
};