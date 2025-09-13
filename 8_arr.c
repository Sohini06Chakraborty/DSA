//Given an integer array nums, return the number of subarrays filled with 0. A subarray is a contiguous non-empty sequence of elements within an array.
#include<stdio.h>
long long zeroFilledSubarray(int* nums, int numsSize) {
    int counter = 0;
    long long sub = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            counter++;
        } else {
            sub += ((counter * (counter+1))/2);
            counter = 0;
        }
    }
    sub += ((counter * (counter+1))/2); // Edge case handling for trailing zeros at the end
    return sub;
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
    long long result = zeroFilledSubarray(nums, n);
    printf("Total number of zero-filled subarrays: %lld\n", result);
    return 0;
}