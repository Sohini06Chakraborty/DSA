//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
#include<stdio.h>
//Two pointer approach
int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    printf("The required array is: \n");
    for(int i = 0; i < k; i++) {
        printf("%d\t", nums[i]);
    }
    printf("\n");
    return k;
}
//Brute force approach
/*
int removeDuplicates(int* nums, int numsSize) {
    int newSize = numsSize;
    for(int i = 0; i < newSize; i++) {
        if(nums[i] == nums[i+1]) {
            for(int j = i+1; j < newSize; j++) {
                nums[j] = nums[j+1];
            }
            i--;
            newSize--;
        }
    }
    printf("The required array is: \n");
    for(int i = 0; i < newSize; i++) {
        printf("%d\t", nums[i]);
    }
    printf("\n");
    return newSize;
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
    int k = removeDuplicates(nums, n);
    printf("%d", k);
    return 0;
}