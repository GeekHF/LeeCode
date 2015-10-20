int maxProfit(int* prices, int pricesSize) {
    int price_low, price_high, profit = 0;
    if (pricesSize < 2) return 0;
    for (int i = 1; i < pricesSize; i++){
        if(prices[i] > prices[i-1]){
            profit = prices[i] - prices[i-1] + profit;
        }
    }
    return profit;
}