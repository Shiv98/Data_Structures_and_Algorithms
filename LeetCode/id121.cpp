/**
 * 121. Best Time to Buy and Sell Stock
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * If you were only permitted to complete at most one transaction 
 * (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
 * Note that you cannot sell a stock before you buy one.\
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()== 0) return 0;
        int msf = prices[0], maxpro = 0, pist = 0;
        for(int i = 0; i< prices.size();i++)
        {
            pist = prices[i]- msf;
            if(prices[i]<msf) msf = prices[i];
            if(pist > maxpro) maxpro = pist;
        }
        return(maxpro);
    }
};