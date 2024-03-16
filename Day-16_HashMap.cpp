/*
525. Contiguous Array
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
*/
class Solution
{
public:
    int findMaxLength(vector<int>& nums)
    {
        unordered_map<int, int>mp;
        int n=nums.size(), total=0, ans=0;
        mp[0]=-1;
        for(int i=0; i<n; i++)
        {
            total+=(nums[i]==0)?-1:1;
            if(mp.find(total)!=mp.end())
            {
                ans=max(ans, i-mp[total]);
            }
            else
            {
                mp[total]=i;
            }

        }
        return ans;

    }
};

