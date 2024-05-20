class Solution {
public:
    bool isPalindrome(int x) {
        long int m,sum=0;
        int temp=x;
        while(x>0)
        {
            m=x%10;
            sum=sum*10+m;
            x=x/10;
        }
        if(sum==temp)
        {
            return true;
        }
        else{
            return false;
        }
    }   
    
};