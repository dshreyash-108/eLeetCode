class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return false;
        }
        vector<int> left_min, right_max(n);
        left_min.push_back(nums[0]);
        right_max[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            left_min.push_back(min(nums[i],left_min[i-1]));
        }
        for(int j = n-2; j >= 0; j--){
            if(nums[j]>right_max[j+1]){
                right_max[j] = nums[j];
            }
            else{
                right_max[j] = right_max[j+1];
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i]>left_min[i] && nums[i]<right_max[i]){
                return true;
            }
        }
        return false;
    }
};