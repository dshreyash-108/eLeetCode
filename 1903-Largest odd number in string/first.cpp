class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0){
            int x = num[i]-'0';
            if(x % 2 != 0){
                return num.substr(0, i+1);
            }
            i--;
        }
        return "";
    }
};