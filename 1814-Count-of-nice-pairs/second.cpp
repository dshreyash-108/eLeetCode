class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> diffCount; // Map to store difference frequencies
        const int MOD = 1e9 + 7;
        int nicePairs = 0;

        for (int i = 0; i < n; i++) {
            int diff = nums[i] - rev_num(nums[i]);
            nicePairs = (nicePairs + diffCount[diff]) % MOD;
            diffCount[diff]++;
        }

        return nicePairs;
    }

private:
    int rev_num(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        return rev;
    }
};