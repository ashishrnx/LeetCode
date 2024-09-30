class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            int el = nums[i];
            if(mp.find(el) != mp.end()){
                int prev = mp[el];
                if(i-prev <= k){
                    return true;
                }
            }
            mp[el] = i;
        }
        return false;
    }
};