/*
2958. Length of Longest Subarray With at Most K Frequency
You are given an integer array nums and an integer k.

The frequency of an element x is the number of times it occurs in an array.

An array is called good if the frequency of each element in this array is less than or equal to k.

Return the length of the longest good subarray of nums.

A subarray is a contiguous non-empty sequence of elements within an array.
*/
class Solution
{
public:
    int maxSubarrayLength(vector<int>& nums, int k)
    {
        int n=nums.size();
        int l=0, r=0, mx=0, ans=0;
        unordered_map<int, int>mp;
        while(r<n)
        {
            mp[nums[r]]++;
            mx=max(mx, mp[nums[r]]);
            if(mx>k)
            {
                while(mx>k)
                {
                    if(mp[nums[l]]==mx)
                    {
                        mx--;
                    }
                    mp[nums[l]]--;
                    l++;
                }
            }
            ans=max(ans, r-l+1);
            r++;
        }
        return ans;

    }
};

