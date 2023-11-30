class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int count=0, count1=0, count2=0;
        int size1=word1.length(), size2=word2.length();
        while(count<size1+size2){
            if(count1<size1){
                result.push_back(word1[count1]);
                count1++;
                count++;
            }
            if(count2<size2){
                result.push_back(word2[count2]);
                count2++;
                count++;
            }
        }
        return result;
    }
};