/**
 * 338. Counting Bits
 * Given a non negative integer number num. 
 * For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's
 * in their binary representation and return them as an array.
 * Input: 5
 * Output: [0,1,1,2,1,2]
 */
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans{0};
        if(num == 0) return ans;
        for(int i = 1;i<=num;i++)
            ans.push_back(ans[i&i-1]+1);
        return ans;
    }
};