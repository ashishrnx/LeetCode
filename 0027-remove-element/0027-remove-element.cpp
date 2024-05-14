class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>v;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=val)v.push_back(nums[i]);
       }
       int k = 0;
        for (int num : v) {
            nums[k++] = num;
        }
       return v.size();
    }
};