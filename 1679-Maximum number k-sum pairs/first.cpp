class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(), count=0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] != -1 && nums[j] != -1 && nums[i] + nums[j] == k) {
                    count++;
                    nums[i] = nums[j] = -1; 
                    break; 
                }
            }
        }
        return count;
    }
};