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
    
    
void MergeSort(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
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
        arr[k] = M[j];
        j++;
        k++;
    }
}
