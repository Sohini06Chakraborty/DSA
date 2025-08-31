//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// for loop i + 1 to n multiplication
#include<stdio.h>
#include<stdlib.h>
//Two pass approach -> Time complexity = O(n)
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int *)malloc(numsSize * sizeof(int));
    int prefix = 1;
    int suffix = 1;
    //Prefix
    for(int i = 0; i < numsSize; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    //Suffix
    for(int j = numsSize-1; j >= 0; j--) {
        answer[j] *= suffix;
        suffix *= nums[j];
    }
    *returnSize = numsSize;
    return answer;
}
//Brute Force -> Time complexity = O(n^2)
/*
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int *)malloc(numsSize * sizeof(int));
    int k = 1;
    for(int i = 0; i < numsSize; i++) {
        //prefix
        for(int j = 0; j < i; j++) {
            k *= nums[j];
        }
        //suffix
        for(int j = i+1; j <numsSize; j++) {
            k *= nums[j];
        }
        answer[i] = k;
        k = 1;
    }
    *returnSize = numsSize;
    return answer;
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
    int k;
    int* answer = productExceptSelf(nums, n, &k);
    printf("The required array is: \n");
    for(int i = 0; i < k; i++) {
        printf("%d\t", answer[i]);
    }
    printf("\n");
    free(answer);
    return 0;
}