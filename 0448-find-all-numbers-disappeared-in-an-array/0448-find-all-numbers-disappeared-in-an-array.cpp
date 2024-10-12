class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for( int it : nums){
            mp[it]++;
        }
        for(int i =1;i<=nums.size();i++){
            if(mp.find(i) == mp.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};