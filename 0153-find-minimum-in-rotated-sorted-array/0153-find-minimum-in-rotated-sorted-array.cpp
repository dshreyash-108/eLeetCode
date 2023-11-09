class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        int ans = INT_MAX;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(nums[mid]>=nums[low])
            {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else
            {
                high = mid -1;
                ans = min(ans, nums[mid]);
            }
        }
        return ans;
    }
};