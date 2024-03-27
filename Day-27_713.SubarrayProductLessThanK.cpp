/*
713. Subarray Product Less Than K
Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
*/
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int total=1;
        int i=0, j=0;
        int cnt=0;
        int n=nums.size();
        if(k<=1)
        {
            return 0;
        }
        while(j<n)
        {
            total*=nums[j];
            while(total>=k)
            {
                
                total/=nums[i];
                i++;
            }
            cnt+=(j-i)+1;
            j++;
        }
        
        return cnt;
    }
};

