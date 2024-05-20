class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        long long m;
        long long  temp;
        // cout<<(x>(pow(2,31)-1));
        if(x>(pow(2,31)-1))
        {
            return 0;
        }
        if(x<0)
        {
            if(x==-2147483648)
            {
                return 0;
            }
            temp=0-x;

        }
        else
        {
            temp=x;
        }
        while(temp>0)
        {
            m=temp%10;
            sum=sum*10+m;
            temp=temp/10;
            if(sum>(pow(2,31)-1))
            {
                return 0;
            }
        }
        if(x<0)
        {
            return 0-sum;
        }
        return sum;
    }
};