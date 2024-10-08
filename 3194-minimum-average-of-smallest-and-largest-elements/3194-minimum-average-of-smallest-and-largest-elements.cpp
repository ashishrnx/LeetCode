class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int l=0,r=nums.size()-1;
       double ans = INT_MAX;
       while(l<r){
        double sum= (nums[l]+nums[r])/2.0;
        l++;
        r--;
        ans= min(ans,sum);
       }
       return (double)ans;
    }
};