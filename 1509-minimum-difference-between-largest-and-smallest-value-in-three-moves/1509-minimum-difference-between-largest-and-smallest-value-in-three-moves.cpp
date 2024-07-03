class Solution {
public:
    int minDifference(vector<int>& nums) {
        int pony=nums.size();
        if(pony<=4){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int final=nums.back()-nums[0];
        for(int i=0;i<=3;i++) {
            final=min(final, nums[pony - (3 - i) - 1] - nums[i]);
        }
        return final;

        /*int diff=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<pony-1;i++){
            for(int loop=1;loop<=3;loop++){
               int low=nums.at(0);
               int high=nums.at(pony-1);
               diff=high-low;
               nums[pony-1]=low;



            }
            
        }
        return diff; */



        
        
    }
};