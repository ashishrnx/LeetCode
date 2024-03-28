class Solution {
public:
    int bs(vector<int>arr,int low,int high,int target){
        int mid=(low+high)/2;
        if(low>high)return -1;
        if(arr[mid]==target)return mid;
        else if(arr[mid]<target)return bs(arr,mid+1,high,target);
        else return bs(arr,low,mid-1,target);

    }
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        return bs(nums,low,high,target);
    }
};