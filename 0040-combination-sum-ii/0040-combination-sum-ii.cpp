class Solution {
    private :
    void cbs(vector<int> &ds,int target,int index,vector<int> &ans,vector<vector<int>> &result){
        if(target==0){
            result.push_back(ans);
            return;
        }
        for(int i=index;i<ds.size();i++){
            if(ds[i]>target)break;
            if (i > index && ds[i] == ds[i - 1]) continue;
            ans.push_back(ds[i]);
            cbs(ds,target-ds[i],i+1,ans,result);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>nums;
        sort(candidates.begin(), candidates.end());
        cbs(candidates,target,0,nums,result);
        return result;
    }
};