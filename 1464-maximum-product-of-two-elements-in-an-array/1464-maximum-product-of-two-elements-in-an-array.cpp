class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int big=-1,second=-1;;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>big){
                second=big;
                big = nums[i];
            }
            
            else if(nums[i]>=second ){
                second = nums[i];
            }
        }
        
        return (big-1)*(second-1);
    }
};