class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_set<int> s;
        for(int i = 0; i < arr.size(); i++){
            if(m.find(arr[i])==m.end()){
                m.insert(make_pair(arr[i], 1));
            }
            else{
                m[arr[i]]++;
            }
        }
        for(auto it = m.begin(); it != m.end(); it++){
            if (s.find(it->second) != s.end()) {
                return false;
            } else {
                s.insert(it->second);
            }
        }
        return true;
    }
};
