#include <iostream>
#include "sorts.h"
using namespace std;

void FillArray(int arr[], const int N){
    for (int i = 0; i < N; i++){
        arr[i] = rand()%20;
    }
}

void ShowArray(int arr[], const int N){
    cout << "Array = ";
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSorts(int arr[], const int size){
    for (int i = 0; i < size - 1; i++){
        for (int z = 0; z < size - 1; z++){
            if (arr[z] > arr[z + 1]){
                swap(arr[z], arr[z + 1]);
            }
        }
    }
}

void SelectionSort(int arr[], const int size){
    for (int i = 0; i < size - 1; i++){
        int min_index = i;
        for (int z = i; z < size; z++){
            if(arr[z] < arr[min_index]){
                min_index = z ;
            }
        }
        if (i != min_index){
            swap(arr[i], arr[min_index]);
        }
    }
}

void InsertionSort(int arr[], const int size){
    int temp;
    int control;
    for(int i = 1; i < size; i++){
        temp = arr[i]; 
        control = i-1;
        while(control >= 0 && arr[control] > temp){
            arr[control+1] = arr[control];
            arr[control] = temp;
            control--;
        }
    }
}

void CountingSort(int arr[], const int size){
    int sizeSecArr = arr[0];
    int temp;
    for (int i = 1; i < size; i++){
        if (sizeSecArr < arr[i]){
            sizeSecArr = arr[i];
        }
    }
    sizeSecArr++;
    int ar[sizeSecArr];
    for (int i = 0; i < sizeSecArr; i++){
        ar[i] = 0;
    }
    for (int i = 0; i < size; i++){
        temp = arr[i];
        ar[temp] = ar[temp] + 1;
    }
    int a[size];
    int h = 0;
    for (int i = 0; i < sizeSecArr; i++){
        if(ar[i] != 0){
            for (int z = 0; z < ar[i]; z++){
                a[h] = i;
                h++;
            }
        }
    }
    cout << "Array = ";
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
