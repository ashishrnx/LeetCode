class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans =0;
        for(auto it : commands){
            if(it=="DOWN"){
                ans= ans+n;
            }
            if(it=="RIGHT"){
                ans=ans+1;
            }
            if(it=="UP"){
                ans= ans-n;
            }
            if(it=="LEFT"){
                ans= ans-1;
            }
        }
        return ans;
    }
};