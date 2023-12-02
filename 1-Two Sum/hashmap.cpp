class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;
            for(int i = 0; i < nums.size(); i++){
                int k = target - nums[i];
                if(map.find(k) != map.end()){
                    return {map[k], i};
                }
                map[nums[i]]=i;
            }
            return {-1, -1};
        }
};