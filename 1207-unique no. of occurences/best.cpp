class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;
        for(auto it: arr){
            hash[it]++;
        }
        unordered_set<int> vas;
        for (auto it : hash){
            vas.insert(it.second);
        }
        return hash.size()==vas.size();
    }
};
