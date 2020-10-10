/**
 * 9. Palindrome Number
 * Determine whether an integer is a palindrome. 
 * An integer is a palindrome when it reads the same backward as forward.
 * 
 * Input: x = -121
 * Output: false
 * 
 * Input: x = 121
 * Output: true
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else
        {
            int temp = x;
            long int rev = 0;
            while(x!=0)
            {
                rev  =rev*10 + x%10;
                x /= 10;
                if(rev >= INT_MAX || rev <= INT_MIN) return false;
            }
            if(temp == rev) return true;
            else return false;
            
        }
    }
};