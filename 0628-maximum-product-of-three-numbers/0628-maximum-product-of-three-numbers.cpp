class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int t=nums.size();
        sort(nums.begin(), nums.end());
        
        int multiply=nums[t-1]*nums[t-2]*nums[t-3];
        int multiply2= nums[0]*nums[1] *nums[t-1];
        
        return max(multiply, multiply2);
        
    }
};