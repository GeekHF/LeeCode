int maxProfit(int* prices, int pricesSize) {
    int price_low, price_high, profit = 0;
    if (pricesSize < 2) return 0;
    if (prices[0] < prices[1]) {
        price_low = 0;
        price_high = 1;
        if(pricesSize == 2) return (prices[price_high] - prices[price_low]);
    }
    else {
        price_low = 1;
        price_high = 1;
        if(pricesSize == 2) return 0;
    }
    for (int i = 2; i < pricesSize; i++){
        if(prices[i] >= prices[i-1] && prices[i-1] >= prices[i-2]){
            price_high = i;
        }
        else if(prices[i] < prices[i-1] && prices[i-1] > prices[price_low]){
            profit = prices[price_high] - prices[price_low] + profit;
            price_low = i;
        }
        else if(prices[i] > prices[i-1] && prices[i-1] <= prices[price_high]){
            price_low = i-1;
            price_high = i;
        }
        else if(prices[i] <= prices[i-1] && prices[i-1] <= prices[i-2]){
            price_low = i;
        }
    }
    if(price_high > price_low) return (profit + prices[price_high]- prices[price_low]);
    return profit;
}