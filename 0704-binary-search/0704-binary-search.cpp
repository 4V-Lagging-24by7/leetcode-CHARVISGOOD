class Solution {
public:
    int search(vector<int>& nums, int target) {
        int starter=0;
        int endd=nums.size()-1;
        
        while(starter<=endd){
            int mid=starter+(endd-starter)/2;

            if(target==nums[mid]){
                return mid;
            } 
            else if (target<nums[mid]){
                endd=mid-1;
            
            } 
            else{
                starter=mid+1;
            }
        }
        
        return -1;
    }
};
