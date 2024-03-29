/*
2962. Count Subarrays Where Max Element Appears at Least K Times
You are given an integer array nums and a positive integer k.

Return the number of subarrays where the maximum element of nums appears at least k times in that subarray.

A subarray is a contiguous sequence of elements within an array.
*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        long long n=nums.size(), ans=0;
        long long last=0, l=0, r=0, cnt=0;
        long long mx=*max_element(nums.begin(), nums.end());
        while(r<n)
        {
            if(nums[r]==mx)
            {
                cnt++;
            }
            if(cnt==k)
            {
                while(cnt==k)
                {
                    cnt-=(nums[l]==mx);
                    l++;
                }
                long long suru=l-last, ses=n-r;
                if(suru==0)
                {
                    ans+=ses;
                }
                else
                {
                    ans+=(suru*ses);
                }
                last=l;
            }
            r++;
        }
        return ans;
    }
};
