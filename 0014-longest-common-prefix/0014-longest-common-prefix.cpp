class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix= "";
        int size = strs.size();
        if(size==0)
        {
            return "";
        }
        
        sort(strs.begin(), strs.end());
         string first = strs[0], last = strs[size-1];
          int minLength = min(first.size(), last.size());
        for(int i = 0; i<minLength; i++)
        {
            if(first[i]==last[i])
            {
                prefix = prefix + first[i];
            }
            else 
            {
                break;
            }
        }
        return prefix;
    }
};