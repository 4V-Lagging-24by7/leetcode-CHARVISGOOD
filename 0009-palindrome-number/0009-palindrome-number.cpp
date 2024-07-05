class Solution {
public:
    bool isPalindrome(int x) {
        string number=to_string(x);
        string rev=number;
        reverse(rev.begin(), rev.end());
        return(number==rev);

        
    }
    
};