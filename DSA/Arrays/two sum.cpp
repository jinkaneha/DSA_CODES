//BRUTE FORCE APPROACH
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int start;
//         int end;
//         int n=nums.size();
//         for(start=0;start<n-1;start++){
//             for(end=start+1;end<n;end++){
//                 if(nums[start]+nums[end]==target){
//                     return {start,end};
//                 }
           
        
//         }}
//         return {};
//     }
// };
//BETTER APPROACH
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(mp.find(more)!=mp.end()){
                return {mp[more],i};
            }
            mp[a]=i;
        }
        return {-1,-1};
    }
};