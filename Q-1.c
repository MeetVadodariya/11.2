// Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.


#include<stdio.h>

void reverseArray(int *arr, int size) 
{
    int *start = arr; 
    int *end = arr + size - 1;

    while (start < end) 
	{
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    printf("Reversed array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
}