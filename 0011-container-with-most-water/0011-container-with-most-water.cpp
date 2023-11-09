class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i = 0, j = height.size()-1;
        while(i<j)
        {
             int heightx = min(height[i], height[j]);
            ans = max(ans, (heightx*(j-i)));
            if(height[j]>=height[i])
            {
                i++;
            }
            else
            {
                j--;
            }

        }
        return ans;
    }
};