/*
930. Binary Subarrays With Sum
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.
*/
class Solution
{
public:
    int numSubarraysWithSum(vector<int>& nums, int goal)
    {
        int n=nums.size();
        unordered_map<int, int>mp;
        int total=0, ans=0;
        mp[0]=1;
        for(auto it:nums)
        {
            total+=it;
            ans+=mp[total-goal];
            mp[total]++;
        }
        return ans;

    }
};


