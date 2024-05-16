class Solution {
    private:
        void ss(vector<int> &ds,int index,vector<int> &ans,vector<vector<int>>&result){
            result.push_back(ans);
            for(int i=index;i<ds.size();i++){
                
                if(i > index && ds[i] == ds[i - 1]) continue;
                ans.push_back(ds[i]);
                ss(ds,i+1,ans,result);
                ans.pop_back();
            }
        }
        
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>ans;
        ss(nums,0,ans,result);
        return result;
    }
};