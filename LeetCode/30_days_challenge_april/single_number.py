"""
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Input: [4,1,2,1,2]
Output: 4
"""

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        num={}
        for i in nums:
            if i in num:
                num[i] += 1
                del num[i]
            else: 
                num[i]= 1
        return list(num.keys())[0] 