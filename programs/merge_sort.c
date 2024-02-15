#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int left, int right) {
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int binary_search(int arr[], int left, int right, int target) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binary_search(arr, left, mid - 1, target);
    else
        return binary_search(arr, mid + 1, right, target);
}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[8],i;
    printf("Enter the elements for array to be searched..\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    print_array(arr, size);
    merge_sort(arr, 0, size - 1);
    printf("Sorted array: ");
    print_array(arr, size);
    int target;
    printf("Enter the target to be searched...\n");
    scanf("%d",&target);
    int result = binary_search(arr, 0, size - 1, target);
    if (result == -1)
        printf("Element %d is not present in the array.\n", target);
    else
        printf("Element %d is present at index %d in the array.\n", target, result);
    return 0;
}
