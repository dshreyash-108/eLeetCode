class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char, int> charMap;
        for(char x: s)
        {
            charMap[x]++;
        }
        for(char x: t)
        {
            if (charMap.find(x) == charMap.end() || charMap[x] <= 0) {
            return false; 
        }
        charMap[x]--;
        }
        return true;
    }
};