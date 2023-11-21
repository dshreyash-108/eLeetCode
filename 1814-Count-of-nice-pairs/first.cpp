class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size(), count = 0; // Initialize count to 0
        for(int i = 0; i < n; i++) {
            int temp1 = nums[i] - rev_num(nums[i]);
            for(int j = i+1; j < n; j++) {
                int temp2 = nums[j] - rev_num(nums[j]);
                if(temp1 == temp2) {
                    count++;
                }
            }
        }
        return count;
    }

private:
    int rev_num(int num) {
        int rev = 0;
        while(num > 0) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        return rev;
    }
};
