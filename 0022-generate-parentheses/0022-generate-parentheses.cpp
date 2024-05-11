class Solution {
    private:
    void genp(int n,string str,int open,int close,vector<string>& gp){
        if(str.length()==n*2){
            gp.push_back(str);
        }
        if(open<n){
            genp(n,str+"(",open+1,close,gp);
            
        }
        if(close<open)
            genp(n,str+")",open,close+1,gp);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string str="";
       int open=0,close=0;
       genp(n,"",0,0,v);
       return v;
    }
};