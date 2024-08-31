#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>merged;

        int i = 0 , j = 0;
        while(i<m && j<n)
        {
            if(nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m)
        {
            merged.push_back(nums1[i]);
            i++;
        }

        while(j<n)
        {
            merged.push_back(nums2[j]);
                j++;
        }
        for (int k = 0; k < merged.size(); k++) {
            nums1[k] = merged[k];
        }
    }
};

int  main()
{
    int n1 , n2;
    cin>>n1>>n2;
    vector<int>nums1(n1);
    for(int i = 0 ; i < n1 ; i++)
    {
        cin>>nums1[i];
    }
    vector<int>nums2(n2);
    for(int j = 0 ; j < n1 ; j++)
    {
        cin>>nums2[j];
    }

    Solution sol;
    sol.merge(nums1, n1, nums2, n2);

    for (int i = 0; i < n1 + n2; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}