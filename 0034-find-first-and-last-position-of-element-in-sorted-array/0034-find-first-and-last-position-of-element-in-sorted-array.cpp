class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>v;
        int flag=0;
        if(nums.empty())
        return {-1,-1};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                flag=1;
                v.push_back(i);
                break;
            }
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                flag=1;
                v.push_back(i);
                break;
            }
        }
        if(flag==0) return {-1,-1};
        

        return v;
    }
};