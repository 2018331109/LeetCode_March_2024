/*
977. Squares of a Sorted Array
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int l=0, r=0, n=nums.size();
        int i=0;
        while(i<n and nums[i]<0)
        {
            i++;
        }
        r=i, l=i-1;
        vector<int>ans;
        while(l>=0 and r<n)
        {
            if(abs(nums[l])<=nums[r])
            {
                ans.push_back(nums[l]*nums[l]);
                l--;
            }
            else
            {
                ans.push_back(nums[r]*nums[r]);
                r++;
            }
        }
        while(l>=0)
        {
            ans.push_back(nums[l]*nums[l]);             
            l--;
        }

        while(r<n)
        {
            ans.push_back(nums[r]*nums[r]);
            r++;
        }

        return ans;

    }

};
