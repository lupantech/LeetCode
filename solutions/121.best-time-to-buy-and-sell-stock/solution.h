int maxProfit(int* prices, int pricesSize) {
    int maxPro = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < pricesSize; i++){
        minPrice = prices[i] < minPrice ? prices[i] : minPrice;
        maxPro = prices[i]-minPrice > maxPro? prices[i]-minPrice : maxPro;
    }
    return maxPro;
}