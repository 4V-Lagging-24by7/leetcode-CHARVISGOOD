class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        int lenn=nums1.size();
        if(lenn%2!=0){
            int final=(0+lenn)/2;
            return nums1.at(final);

            }
        else{
            int final=(lenn/2)-1;
            int final2=lenn/2;
            return (nums1.at(final)+nums1.at(final2))/2.0;

            
            }

            
        


        
    }
};