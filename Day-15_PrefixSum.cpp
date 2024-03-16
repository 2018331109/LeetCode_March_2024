/*
238. Product of Array Except Self
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.


*/
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        int prefix[n], suffix[n];
        prefix[0]=nums[0], suffix[n-1]=nums[n-1];
        for(int i=1; i<n; i++)
        {
            prefix[i]=prefix[i-1]*nums[i];
        }
        for(int i=n-2; i>=0; i--)
        {
            suffix[i]=suffix[i+1]*nums[i];
        }

        vector<int>v;
        v.push_back(suffix[1]);
        for(int i=1; i<n-1; i++)
        {
            v.push_back(prefix[i-1]*suffix[i+1]);
        }
        v.push_back(prefix[n-2]);

        return v;

    }
};

