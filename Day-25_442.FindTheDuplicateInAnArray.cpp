/*
442. Find All Duplicates in an Array
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        bitset<100005>bits;
        vector<int>ans;
        for(auto it:nums)
        {
            if(bits[it])
            {
                ans.push_back(it);
            }
            else
            {
                bits[it]=1;
            }
        }
        return ans;
        
    }
};
