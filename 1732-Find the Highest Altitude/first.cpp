class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, n = gain.size();
        vector<int> alt(n+1);
        alt[0] = 0;
        for(int i = 0; i < n; i++){
           alt[i+1] = alt[i] + gain[i];
        }
        for(int i = 0; i < n+1; i++){
            ans = max(ans, alt[i]);
        }
        return ans;
    }
};