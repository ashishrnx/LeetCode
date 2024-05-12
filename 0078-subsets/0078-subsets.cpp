class Solution {
    private:
        void sss(vector<int>&nums, int n, vector<int>&v,vector<vector<int>>&ans){
            ans.push_back(v);
            for(int i=n;i<nums.size();i++){
                v.push_back(nums[i]);
                sss(nums,i+1,v,ans);
                v.pop_back();
            }
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
         
        sss(nums,0,v,ans);
        return ans;
    }
};