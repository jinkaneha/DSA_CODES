class Solution {
public:
    int firstelement(vector<int>& nums, int target,int start,int end,int mid,int first){
        while(start<=end){
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return first;
    }
       int lastelement(vector<int>& nums, int target,int start,int end,int mid,int last){
        while(start<=end){
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int first=-1;
        int last=-1;
        vector<int> ans;
        ans.push_back(firstelement(nums,target,start,end,mid,first));
        ans.push_back(lastelement(nums,target,start,end,mid,last));
        return ans;
        }
    
};