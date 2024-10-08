class Solution {
public:
    bool isPowerOfThree(int n) {
        double ans= 1;
        if(n==1)return true;
        for(int i =0;i<n/2+1;i++){
            ans= ans*3;
            if(ans==n)return true;
            if(ans>n)return false;
        }
        return false;
    }
};