class Solution {
    private:
     bool isPalindrome(string &str) {
        int sz = str.size();
        for (int i = 0; i < sz / 2; ++i)
            if (str[i] != str[sz - i - 1])
                return false;

        return true;
    }
    private:
    void part(string str , int index , vector<string> &ans , vector<vector<string>> &result){
        if(index == str.length()){
            result.push_back(ans);
        }
        string palstr ="";
        for(int i=index; i<str.size() ;++i){
            palstr += str[i];
            if(isPalindrome(palstr)){
                ans.push_back(palstr);
                part(str,i+1,ans, result);
                ans.pop_back();
            } 
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>ans;
        part(s,0,ans,result);

        return result;
    }
};