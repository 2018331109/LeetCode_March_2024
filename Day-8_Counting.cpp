/*
3005. Count Elements With Maximum Frequency
You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.
*/
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int>mp;int mx=0, cnt=0;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[it]>mx)
            {
                cnt=1;
                mx=mp[it];
            }
            else if(mp[it]==mx)
            {
                cnt++;
            }
        }
         
        return cnt*mx;
        
    }
};
