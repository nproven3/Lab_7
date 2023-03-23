#include <stdio.h>
#include <stdlib.h>
void fillArray(int ** arr, int size);
void BubbleSort(int * arr, int size);
void printer(int * arr, int size);


void fillArray(int ** arr, int size)
{

    int * temp = (int*)malloc(sizeof(int) * size);
    temp[0] = 97;
    temp[1] = 16;
    temp[2] = 45;
    temp[3] = 63;
    temp[4] = 13;
    temp[5] = 22;
    temp[6] = 7;
    temp[7] = 58;
    temp[8] = 72;

    (*arr) = temp;

}


void BubbleSort(int * arr, int size)
{

    int x = 0;
    int temp = 0; //Holds temporary value
    int iterations = 0;
    int swaps = 0;

    for(int i = 0; i < size - 1; i++){
        iterations++;
        for(int x = 0; x < size - i - 1; x++){
            if(arr[x + 1] < arr[x]){
                
                swaps++;
                temp = arr[x]; //Swap takes place here
                arr[x] = arr[x + 1]; //Using a temporary variable
                arr[x + 1] = temp;

        }
        }

    }
    printer(arr, 9); //Prints out the array

    printf("Iteration #: %d\n", iterations);
    printf("Num swaps#: %d\n", swaps);

}

void printer(int * arr, int size)
{

    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

}

int main()
{

    int * arr;

    fillArray(&arr, 9);
    printf("Before sort:_____________________________\n");
    printer(arr, 9);
    printf("After Sort:______________________________\n");
    BubbleSort(arr, 9);
    
    return 0;
}