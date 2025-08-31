//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include<stdio.h>
//Single pointer approach
void moveZeroes(int* nums, int numsSize) {
    int a = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[a];
            nums[a] = temp;
            a++;
        }
    }
    printf("The required array is: \n");
    for(int i = 0; i < numsSize; i++) {
        printf("%d\t", nums[i]);
    }
}
//Two pointer approach
/*
void moveZeroes(int* nums, int numsSize) {
    int a = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[a] = nums[i];
            a++;
        }
    }
    for(int j = a; j < numsSize; j++) {
        nums[j] = 0;
    }
    printf("The required array is: \n");
    for(int i = 0; i < numsSize; i++) {
        printf("%d\t", nums[i]);
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
    moveZeroes(nums, n);
    return 0;
}