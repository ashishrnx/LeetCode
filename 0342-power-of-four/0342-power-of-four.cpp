class Solution {
public:
    bool isPowerOfFour(int n) {
        double ans= 1;
        if(n==1)return true;
        for(int i =0;i<n/2+1;i++){
            ans= ans*4;
            if(ans==n)return true;
            if(ans>n)return false;
        }
        return false;
    }
};