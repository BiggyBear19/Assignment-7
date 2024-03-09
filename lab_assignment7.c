#include <stdio.h>
#include <stdlib.h>

void swap(int* arr1, int* arr2, int* count1, int* count2){
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
    *count1 += 1;
    *count2 += 1;
}

void bubbleSort(int arr[], int length){
    int i,j;
    int countTotal = 0;
    int countVal = 0;
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(i = 0; i < length - 1; i++){
        for(j = 0; j < length-i-1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1], &count[i], &count[j + 1]);

            }

        }
        countTotal++;

    }

    for(int z = 0; z < length - 1; z++){
        printf("%d: # number of times %d swapped\n",arr[z], count[z]);

    }
    printf("Total: # number of times %d swapped\n",countTotal, countTotal);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void insertionSort(int arr[], int length){
    int i, j, minIndex;
    int countTotal = 0;
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(i = 0; i < length - 1; i++){

        minIndex = i;
        for(j = i + 1; j < length; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

            if(minIndex != i){
                swap(&arr[minIndex], &arr[i], &count[i], &count[minIndex]);
                count[i]++;
            }
        }

        countTotal++;
    }
    printf("total: # number of times %d swapped\n",countTotal, countTotal);

}


int main(){
    int array1[] = {91, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int length = 9;
    bubbleSort(array1, length);
    insertionSort(array1, length);
    printArray(array1, length);
    insertionSort(array1, length);
    bubbleSort(array2, length);
    insertionSort(array2, length);


}