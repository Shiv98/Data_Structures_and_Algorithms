/**
 * 7. Reverse Integer
 * Given a 32-bit signed integer, reverse digits of an integer.
 * 
 * Input: x = 123
 * Output: 321
 * 
 * Input: x = -123
 * Output: -321
 * 
 * Input: x = 120
 * Output: 21
 */

class Solution {
public:
    int reverse(int x) {
        long int p=x,ans=0;
        x=abs(x);
        while(x!=0)
        {
            long int d=x%10;
            ans=ans*10 + d;
            x=x/10;
            if(ans >= INT_MAX || ans <= INT_MIN) return 0;
        }
        return p>0?ans:(-ans);
    }
};