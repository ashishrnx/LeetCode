class Solution {
    long long int time(vector<int>& v, int mid){
        long long int th=0;
        for(int i =0;i<v.size();i++){
            th+=ceil((double)(v[i])/(double)(mid));
        }
        return th;
    }
public: 
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans =-1,low = 1, high = *max_element(piles.begin(),piles.end());
        
        while(low <= high){
            int mid = low + (high-low)/2;
            long long int tt = time(piles,mid);
            cout<<tt<<" ";
            if(tt <= h){
                ans = mid;
                high = mid-1;
            }
            else if(tt > h) low = mid+1;
        }
        return ans;
    }
};