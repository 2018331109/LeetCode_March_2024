/*
2540. Minimum Common Value
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.
*/
class Solution
{
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size(), m=nums2.size();
        int i=0, j=0;
        while(i<n and j<m)
        {
            if(nums1[i]==nums2[j])
            {
                return nums1[i];
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        
        return -1;

    }
};
