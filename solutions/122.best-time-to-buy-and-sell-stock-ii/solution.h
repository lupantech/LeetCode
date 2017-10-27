int maxProfit(int* prices, int pricesSize) {
    int sumPro = 0;
    for (int i = 1; i < pricesSize; i++){
        if (prices[i] - prices[i-1] > 0)
            sumPro += prices[i] - prices[i-1];
    }
    return sumPro;
}