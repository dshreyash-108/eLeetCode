class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int ans = INT_MIN, n = nums.size(), temp = 0;
        for(int i =0; i < n; i++)
        {
            temp = temp + nums[i];
            if(temp>ans)
            {
                ans = temp;
            }
            if(temp<0)
            {
                temp = 0;
            }
        }
        return ans;
    }
};