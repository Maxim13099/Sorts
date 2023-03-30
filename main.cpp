#include <iostream>
#include "sorts.h"
using namespace std;

int main(){
    int size = 10;
    int arr[size];
    FillArray(arr, size);
    ShowArray(arr, size);
    int c;
    cin >> c;
    switch (c) {
        case 1:
        BubbleSorts(arr, size);
        ShowArray(arr, size);
        break;
        case 2:
        SelectionSort(arr, size);
        ShowArray(arr, size);
        break;
        case 3:
        InsertionSort(arr, size);
        ShowArray(arr, size);
        break;
        case 4:
        CountingSort(arr, size);
        break;
        case 5:
        
        break;
        }
}
