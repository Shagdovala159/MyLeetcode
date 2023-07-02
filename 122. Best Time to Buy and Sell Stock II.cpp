class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0];
        int sell = 0;
        int total = 0;
        int len = prices.size();
        for (int i = 1; i < len; i++)
        {
            if (prices[i] - buy > sell)
            {
                sell = prices[i] - buy;
                if (i == len - 1)
                {
                    total += sell;
                }
            }
            else
            {
                buy = prices[i];
                total += sell;
                sell = 0;
            }
        }
        return total;
    }
};