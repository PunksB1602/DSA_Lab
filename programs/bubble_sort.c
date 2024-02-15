#include <stdio.h>
int main(){
    int arr[50], num, x, y, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter the value of elements: ");
    for(x = 0; x < num; x++)
        scanf("%d", &arr[x]);
    printf("Array before sorting: ");
   for(x = 0; x < num; x++)
   {
       printf("%d ",arr[x]);
   }
    for(x = 0; x < num - 1; x++)
        {
        for(y = 0; y < num - x - 1; y++)
        {
            if(arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("\nArray after bubble sorting: ");
    for(x = 0; x < num; x++){
        printf("%d  ", arr[x]);
    }
    return 0;
}
