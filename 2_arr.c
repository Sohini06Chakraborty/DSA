//Given an array nums of size n, return the majority element.
#include<stdio.h>
//Boyer-Moore Voting Algorithm -> time complexity is O(n) and space complexity is O(1)
int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int count = 0;
    for(int i = 0; i < numsSize; i++) {
        if(count == 0) {
            candidate = nums[i];
            count++;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}
// Brute Force method -> time complexity is O(n^2)
/*
int majorityElement(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++) {
        int currentNumber = nums[i];
        int currentCount = 0;
        for(int j = 0; j < numsSize; j++) {
            if(nums[i] == nums[j]) {
                currentCount++;
                if(currentCount > (numsSize/2)) {
                    return currentNumber;
                }
            }
        }
    }
}
*/
int main() {
    int nums[100];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("The current array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", nums[i]);
    }
    printf("\n");
    int count = majorityElement(nums, n);
    printf("The majority element is: %d", count);
    return 0;
}