class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rm = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int total=0;
    for(int i=0;i<s.length();i++){
        if(rm[s[i]]<rm[s[i+1]]){
            total-=rm[s[i]];
        }
        else{
            total+=rm[s[i]];
        }
    }
    return total;
    }
};