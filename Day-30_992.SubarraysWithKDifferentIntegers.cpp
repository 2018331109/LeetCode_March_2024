/*
992. Subarrays with K Different Integers
Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

    For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.

A subarray is a contiguous part of an array.
*/
class Solution
{
public:
    int call(int k, vector<int>&nums)
    {
        int n=nums.size();
        int l=0, r=0, ans=0;
        unordered_map<int, int>mp;
        while(r<n)
        {
            mp[nums[r]]++;
            if(mp.size()>k)
            {
                while(mp.size()>k)
                {
                    mp[nums[l]]--;
                    if(mp[nums[l]]==0)
                    {
                        mp.erase(nums[l]);
                    }
                    l++;
                }
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k)
    {
        int ans1=call(k, nums);
        int ans2=call(k-1, nums);
        return ans1-ans2;
    }
};

