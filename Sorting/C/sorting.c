#include <stdio.h>

void print_array(int* array, int arrayLength){
    for (int i = 0; i < arrayLength; i++) {
        printf("array[%d]: %d\n",i, array[i]);
    }
}

int count_array_length(int* array){
    int numberOfElements = 0;
    int i = 0;
    while (array[i] != 0){
        numberOfElements++;
        i++;
    }
    return numberOfElements;
}

void swap_elements_in_array(int* array, int index1, int index2){
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

/* Moving the highest number to the end. Comparing each pair from the beginning up to the sorted elements. */
void bubble_sort(int* array, int arrayLength){
    for (int i = 0; i < arrayLength - 1; i++){
        for (int j = 1; j < arrayLength - i; j++) {
            if (array[j-1] >  array[j]){
                swap_elements_in_array(array, j-1, j);
            }
        }
    }
}

/* Moving each number to the correct position by comparing it's value with the lower elements. */
void insertion_sort(int* array, int arrayLength){
    for (int i = 1; i < arrayLength; i++){
        int valueToCompare = array[i];
        
        //Moving the higher value up until correct postion.
        int j = i;
        while(array[j-1] > valueToCompare && j > 0){
            array[j] = array[j-1]; 
            j--;
        }
        array[j] = valueToCompare;
    }
}

/*  */
int main(){
    int array[] = {2,40,7,10,1,2,3,90,-90,0}; // End with zero to know when array ends
    int numberOfElements = count_array_length(array);

    printf("Before:\n");
    print_array(array, numberOfElements);
    printf("--\n");

    //bubble_sort(array, numberOfElements);
    insertion_sort(array, numberOfElements);

    printf("After:\n");
    print_array(array, numberOfElements);
    printf("--\n");

    return 0;
}