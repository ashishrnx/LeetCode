class Solution {
public:
    bool isPowerOfTwo(int n) {
        double ans=1;
        if(n==1)return true;
        for(int i =1;i<n;i++){
            ans= ans*2;
            if(ans == n)return true;
            if(ans > n)return false;
        }
        return false;
    }
};