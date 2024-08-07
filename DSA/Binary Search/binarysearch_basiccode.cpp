class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
        if(nums[mid]==target) return mid;
        if(target>nums[mid]){
            low=mid+1;
        }
        if(target<nums[mid]){
            high=mid-1;
        }
           mid=low+(high-low)/2;
        }
        return -1;
        
    }
};