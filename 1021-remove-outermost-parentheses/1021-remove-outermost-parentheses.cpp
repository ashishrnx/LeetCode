class Solution {
public:
    string removeOuterParentheses(string S) {
        string str = "";
        int count=0;
        for (  char c : S){
            if(c == '(' && count++>0){    
                str+=c;
            }
            if(c== ')' && count-->1){
                str+=c;
            }
        }

        return str;
    }
};