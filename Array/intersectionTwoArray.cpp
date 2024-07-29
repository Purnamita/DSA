#include <vector>
#include <set>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> result_set;  // Using a set to store unique elements
    int i = 0, j = 0;

    // Sorting both arrays to use two-pointer technique
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums2[j] < nums1[i]) {
            j++;
        } else {
            result_set.insert(nums1[i]);  // Insert into set to ensure uniqueness
            i++;
            j++;
        }
    }

    // Convert set to vector to return
    std::vector<int> ans(result_set.begin(), result_set.end());
    return ans;
}
