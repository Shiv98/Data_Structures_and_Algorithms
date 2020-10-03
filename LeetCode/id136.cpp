/**
 * 136. Single Number
 * Given a non-empty array of integers, every element appears twice except for one. Find that single one.
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 * Input: [4,1,2,1,2]
 * Output: 4
 */


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i : nums)
        {
            num  = num ^ i;
        }
        return num;
    }
};