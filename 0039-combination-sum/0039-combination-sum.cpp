class Solution {
    private:
    void cbs(vector<int>& ans,vector<int>& v,int index,int target,vector<vector<int>>& result){
        if(index==ans.size()){
            if(target==0){
            result.push_back(v);
        } 
        return;
        }       
            if(ans[index]<=target ){
                v.push_back(ans[index]);
                cbs(ans,v,index,target-ans[index],result);
                v.pop_back();
            }
           
        
        cbs(ans,v,index+1,target,result);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        cbs(candidates,ans,0,target,result);
        return result;
    }
};