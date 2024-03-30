class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>v;
       int low=0,high=nums.size()-1,mid,first=-1,last=-1;
       if(nums.empty())return {-1,-1};
        while(low<=high){
            mid=low +(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
                
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0,high=nums.size()-1;
        while(low<=high){
            mid=low +(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
                
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        v.push_back(first);
        v.push_back(last);
        
       return v;
    }
};