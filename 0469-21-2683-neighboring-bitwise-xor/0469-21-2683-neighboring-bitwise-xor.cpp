#include <vector>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        if(isValidOriginal(derived, 0)){
            return true;
        }
        if(isValidOriginal(derived, 1)){
            return true;
        }
        return false;
    }

private:
    bool isValidOriginal(const vector<int>& derived, int original0){
        int n = derived.size();
        vector<int> original(n);
        original[0] = original0;
        for (int i = 1; i < n; ++i) {
            original[i] = derived[i - 1] ^ original[i - 1];
        }
        return (original[n - 1] ^ original[0]) == derived[n - 1];
    }
};
