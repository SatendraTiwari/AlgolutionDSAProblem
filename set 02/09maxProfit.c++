#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    if (n == 0) return 0; 
    int minPrice = prices[0];  
    int maxProfit = 0;         

    
    for (int i = 1; i < n; i++) {
        
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        
        int profit = prices[i] - minPrice;

        
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, n);
    cout << "Maximum profit: " << result << endl;

    return 0;
}