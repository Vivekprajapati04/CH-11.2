#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *left = arr; 
    int *right = arr + size - 1; 
    
    while (left < right) {
       
        int temp = *left;
        *left = *right;
        *right = temp; 
        
        left++;
        
        right--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, size); 
    
    printf("Reverse of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
