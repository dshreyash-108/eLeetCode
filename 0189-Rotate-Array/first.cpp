class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i =0; i<k; i++)
        {
            int m = nums[n-1];
            nums.insert(nums.begin(), m);
            nums.pop_back();
        }
    }
}; 

//caused TLE at second last test case
