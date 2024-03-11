/*
791. Custom Sort String
You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

Return any permutation of s that satisfies this property.
*/
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>v(26, 0);
        string ans;
        for(auto it:s)
        {
            v[it-'a']++;
        }
        for(auto it:order)
        {
            while(v[it-'a']>0)
            {
                v[it-'a']--;
                ans+=it;
            }
        }
        for(int i=0;i<26;i++)
        {
            while(v[i]--)
            {
                ans+=i+'a';
            }
        }

        return ans;
    }
};
