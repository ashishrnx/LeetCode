class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int mid;
        if(nums.size()==1)return low;        
        if(nums[low]>nums[low+1] )return low;
        if(nums[high]>nums[high-1])return high;
        while(low<=high){
            mid=low+( high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            else if( mid>0 && nums[mid]<nums[mid-1]){
                 
                 high=mid;
            }
            else{
                low=mid+1;
               
            }
        }
        return {};
    }
};