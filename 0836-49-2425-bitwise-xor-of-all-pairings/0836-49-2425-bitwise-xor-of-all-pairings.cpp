class Solution {
public:
    int xorAllNums(std::vector<int>& nums1, std::vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        
        int a=0;
        int b=0;
        
        for (int num : nums1){
            a^=num;
        }
        
        for (int num : nums2){
            b^=num;
        }
        
        int result=0;
        if (len2 % 2!= 0){
            result ^= a;
        }
        if (len1 % 2 != 0) {
            result ^=b;
        }
        
        return result;
    }
};
