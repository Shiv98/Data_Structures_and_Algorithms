/**
 * 392. Is Subsequence
 * Given a string s and a string t, check if s is subsequence of t.
 * A subsequence of a string is a new string which is formed from the original string by deleting some (can be none)
 *  of the characters without disturbing the relative positions of the remaining characters. 
 * (ie, "ace" is a subsequence of "abcde" while "aec" is not).
 * 
 * Input: s = "abc", t = "ahbgdc"
 * Output: true
 */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for (int i=0; i<t.length()&&j<s.length(); i++) 
            if (s[j] == t[i]) 
                j++; 
        return (j==s.length()); 
    }
};