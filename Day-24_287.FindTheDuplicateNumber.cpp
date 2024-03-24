/*
287. Find the Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        bitset<100001>bits;
        for(auto it:nums)
        {
            if(bits[it])
            {
                return it;
            }
            bits[it]=1;
        }
        return 0;
    }
};
