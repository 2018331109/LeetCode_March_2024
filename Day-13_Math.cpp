/*
2485. Find the Pivot Integer
Given a positive integer n, find the pivot integer x such that:

    The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.
*/

class Solution
{
public:
    int pivotInteger(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            int left=i*(i-1)/2;
            int right=(n*(n+1)/2)-(i*(i+1)/2);
            if(left==right)
            {
                return i;
            }
        }
        
        return -1;

    }
};

