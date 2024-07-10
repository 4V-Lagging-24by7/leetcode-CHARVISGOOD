class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int major=n/2;
        sort(nums.begin(),nums.end());
        return nums[major];
            
            
        
        
    }
};