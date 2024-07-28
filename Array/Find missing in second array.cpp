#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissing(vector<int>& a, vector<int>& b, int n, int m) {
        unordered_set<int> bSet(b.begin(), b.end()); //(b, b+m);
        vector<int> result;
        
        for (int i = 0; i < n; ++i) {
            if (bSet.find(a[i]) == bSet.end()) { 
                result.push_back(a[i]);
            }
        }
        
        return result;
    }
};
