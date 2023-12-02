class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int x = 0, n = candies.size();
        vector<bool> boolArr;
        for(int i = 0; i < n; i++){
            if(candies[i]>=x){
                x = candies[i];
            }
        }
        for(int i = 0; i<n; i++){
            boolArr.push_back(candies[i]+extraCandies>=x);
        }
        return  boolArr;
    }
};