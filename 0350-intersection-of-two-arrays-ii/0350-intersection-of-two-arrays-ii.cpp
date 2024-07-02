class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> charmsss;
        for(int q=0;q<nums1.size();q++){
            for(int k=0;k<nums2.size();k++){
                if(nums1.at(q)==nums2.at(k)){
                    charmsss.push_back(nums1.at(q));
                    nums2[k]=-1;
                    break;
                }
                
            }
        }
        return charmsss;
    }
};