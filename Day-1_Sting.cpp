/*
2864. Maximum Odd Binary Number
You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.
*/
class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int n=s.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
        }
        string ans;
        int i=1;
        for(i=1; i<cnt; i++)
        {
            ans+='1';
        }
        while(i<n)
        {
            ans+='0';
            i++;
        }
        ans+='1';

        return ans;

    }
};

