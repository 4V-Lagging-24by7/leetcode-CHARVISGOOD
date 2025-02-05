class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using bubble sort done
        
        int cherry=nums.size();
        for(int i=0;i<cherry-1;i++){
            for(int j=0;j<cherry-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
                
                
            }
        }          
    }
};