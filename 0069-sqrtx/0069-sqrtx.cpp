class Solution {
public:
    int mySqrt(int x) {
        int low =1;
        int high =x;
        int ans,mid=0;
        while (low<=high){
            if(x ==0 || x==1)return 1;
            mid = low + (high -low)/2;
            if(pow(mid,2)==x)return mid;
            else if(pow(mid,2)>x){
                high=mid-1;
            }
            else if(pow(mid,2)<x){
                ans=mid;
                low=mid+1;
            }

        }
        return ans;
    }
};