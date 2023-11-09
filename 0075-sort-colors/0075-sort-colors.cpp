class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m = 0; 
        int count0 = 0, count1 = 0, count2 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) 
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            else if(nums[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        while(count0 > 0)
        {
            nums[m] = 0;
            count0--;
            m++;
        }
        while(count1 > 0)
        {
            nums[m] = 1;
            m++;
            count1--;
        }
        while(count2 > 0)
        {
            nums[m] = 2;
            m++;
            count2--;
        }
    }
};
