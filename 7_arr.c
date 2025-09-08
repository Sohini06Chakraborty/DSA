//You are given an integer array prices where prices[i] is the price of a given stock on the ith day. On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day. Find and return the maximum profit you can achieve.
#include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;
    for(int i = 1; i < pricesSize; i++) {
        if(prices[i] > prices[i-1]) {
            max_profit += prices[i] - prices[i-1];
        }
    }
    return max_profit;
}
int main() {
    int nums[100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int k = maxProfit(nums, n);
    printf("%d", k);
    return 0;
}