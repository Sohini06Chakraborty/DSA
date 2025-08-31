//You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
    int min_price = prices[0];
    int max_profit = 0;
    for(int i = 1; i < pricesSize; i++) {
        if(min_price > prices[i]) {
            min_price = prices[i];
        }
        int current_profit = prices[i] - min_price;
        if(current_profit > max_profit) {
            max_profit = current_profit;
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