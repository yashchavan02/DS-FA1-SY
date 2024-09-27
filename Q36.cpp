#include <iostream>
using namespace std;

// chatgpt

int Partition(int arr[], int Low, int High){
    int mid = (Low + High) / 2; 
    int Pivot = arr[mid];  
    int i = Low;
    int j = High;
    int Temp;
    do {
        while (arr[i] < Pivot) { 
            i++;
        }
        while (arr[j] > Pivot) { 
            j--;
        }
        if (i <= j) {
            Temp = arr[i];
            arr[i] = arr[j];
            arr[j] = Temp;
            i++; 
            j--;
        }
    } while (i <= j); 
    return i;
}

void QuickSort(int arr[], int Low, int High) {
    if (Low < High) {
        int PartitionIndex = Partition(arr, Low, High);
        QuickSort(arr, Low, PartitionIndex - 1);        
        QuickSort(arr, PartitionIndex, High);           
    }
}

void PrintArray(int arr[], int Size) {
    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {22, 7, 2, 19, 10, 18, 15, 13};
    int size = sizeof(arr) / sizeof(arr[0]); 
    QuickSort(arr, 0, size - 1);            
    PrintArray(arr, size);                   
    return 0;
}
