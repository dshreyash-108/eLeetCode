class Solution {
public:
    string removeStars(string s) {
        string result="";
        int n = s.length(), i = 0;
        if(s[0]=='*'){
            i++;
        }
        for( ; i < n ; i++){
            if(s[i]=='*'){
                result.pop_back();
            }
            else{
                result += s[i];
            }
        }
        return result;
    }
};