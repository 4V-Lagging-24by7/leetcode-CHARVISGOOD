class Solution {
public:
    void reverseString(vector<char>& s) {
        /*int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            char m = s[i];
            s[i] = s[n - 1 - i];
            s[n - 1 - i] = m;
        }*/


        //second solution too
        int st=0;
        int e=s.size()-1;
        while(st<e){
        swap(s[st++], s[e--]);
        }
    }
};