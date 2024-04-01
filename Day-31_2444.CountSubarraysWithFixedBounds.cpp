/*
2444. Count Subarrays With Fixed Bounds
You are given an integer array nums and two integers minK and maxK.

A fixed-bound subarray of nums is a subarray that satisfies the following conditions:

    The minimum value in the subarray is equal to minK.
    The maximum value in the subarray is equal to maxK.

Return the number of fixed-bound subarrays.

A subarray is a contiguous part of an array.
*/
#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ll ans=0, l=0, r=0, mn=-1, mx=-1, bad=-1;
        ll n=nums.size();
        while(r<n)
        {
            if(nums[r]<minK or nums[r]>maxK)
            {
                bad=r;
            }
            if(nums[r]==minK)
            {
                mn=r;
            }
            if(nums[r]==maxK)
            {
                mx=r;
            }
            //cout<<mn<<" "<<mx<<" "<<bad<<endl;
            ans+=max(0ll, min(mx, mn)-bad);
            r++;
        }
         
        return ans;
    }
};
