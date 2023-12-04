class Solution {
    public:
int missingNumber(std::vector<int>& nums) {
    std::unordered_set<int> numSet;

    // Step 1: Mark each number as present in the hashtable
    for (int num : nums) {
        numSet.insert(num);
    }

    // Step 2: Iterate from 0 to n and find the missing number
    int n = nums.size();
    for (int i = 0; i <= n; ++i) {
        if (numSet.find(i) == numSet.end()) {
            return i;
        }
    }

    return -1; // This line should not be reached, as there is always a missing number.
}
};
