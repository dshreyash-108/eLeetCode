class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> result; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                result.push_back(nums[i]); 
            } else {
                count++;
            }
        }
        
        while (count > 0) {
            result.push_back(0);
            count--;
        }
        
        nums = result;
    }
};
