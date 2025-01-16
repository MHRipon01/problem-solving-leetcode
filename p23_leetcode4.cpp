// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> mergedNums;
        for (int i = 0; i < n; i++)
        {
            mergedNums.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            mergedNums.push_back(nums2[i]);
        }

        sort(mergedNums.begin(), mergedNums.end());

        int totalSize = mergedNums.size();

        if (totalSize % 2 == 1)
        {
            return mergedNums[totalSize / 2];
        }
        else
        {
            int middle1 = mergedNums[totalSize / 2 - 1];
            int middle2 = mergedNums[totalSize / 2];
            return (middle1 + middle2) / 2.0;
        }
    }
};