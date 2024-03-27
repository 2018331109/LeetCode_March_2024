/*
41. First Missing Positive
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
*/
class Solution
{
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]<=0)
            {
                nums[i]=n+1;
            }
        }
        for(int i=0; i<n; i++)
        {
            int vl=abs(nums[i]);
            if(vl<=n and nums[vl-1]>0)
            {
                nums[vl-1]*=-1;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]>0)
            {
                return i+1;
            }
        }

        return n+1;
    }
};

