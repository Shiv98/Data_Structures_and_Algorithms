/**
 * 3. Longest Substring Without Repeating Characters
 * Given a string s, find the length of the longest substring without repeating characters.
 * Input: s = "abcabcbb"
 * Output: 3
 * Explanation: The answer is "abc", with the length of 3.
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0 || n == 1) return n;
        int i = 0, j = 0,ans= 0;
        vector<int> cnt(300,0);
        cnt[s[0]] = 1;
        while(j!=n-1)
        {
            if(cnt[s[j+1]] == 0)
            {
                cnt[s[j+1]]++;
                j++;
                ans = max(ans,j-i+1);
            }
            else
            {
                cnt[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};