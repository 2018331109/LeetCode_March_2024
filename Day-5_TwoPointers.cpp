/*
1750. Minimum Length of String After Deleting Similar Ends
Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

    Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
    Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
    The prefix and the suffix should not intersect at any index.
    The characters from the prefix and suffix must be the same.
    Delete both the prefix and the suffix.

Return the minimum length of s after performing the above operation any number of times (possibly zero times).
*/
class Solution
{
public:
    int minimumLength(string s)
    {
        int n=s.size();
        int l=0, r=n-1;
        while(l<r and s[l]==s[r])
        {
            char ch=s[l];
            while(l<=r and s[l]==ch)
            {
                l++;
            }
            while(r>=l and s[r]==ch)
            {
                r--;
            }
        }
        return r-l+1;

    }
};

