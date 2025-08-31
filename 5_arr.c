//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
/*Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]*/


#include<stdio.h>
void reverse(int *arr, int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    reverse(nums, 0, numsSize-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, numsSize-1);
}
/* Brute force method
void rotate(int* nums, int numsSize, int k) {
    int cp[numsSize];
    int j = 0;
    k = (k % numsSize);
    for(int i = numsSize-k; i < numsSize; i++) {
        cp[j] = nums[i];
        j++;
    }
    for(int i = 0; i < numsSize-k; i++) {
        cp[k + i] = nums[i];
    }
    for(int i = 0; i < numsSize; i++) {
        nums[i] = cp[i];
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
    int k;
    printf("Enter the number of steps: ");
    scanf("%d", &k);
    rotate(nums, n, k);
    printf("The required array is: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", nums[i]);
    }
    return 0;

}