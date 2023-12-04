class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int i = 0, sum = 0, n = nums.size();
       while(i<n){
           sum += nums[i];
           i++;
       }
       int result = (n*(n+1)/2);
       if(result != sum){
           return (result - sum);
       }
       else{
           while(i<n){
               if(nums[i]==0){
                   return n;
               }
           }
           return 0;
       }
    }
};