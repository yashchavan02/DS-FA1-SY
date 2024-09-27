#include <iostream>
using namespace std;

/*    chatgpt pivot as last     */ 

int Partition(int arr[], int Low, int High) {
    int Pivot = arr[High]; 
    int i = Low - 1; 
    int Temp;

    for (int j = Low; j < High; j++) {
        if (arr[j] <= Pivot) {
            i++; 
            Temp = arr[i];
            arr[i] = arr[j];
            arr[j] = Temp;
        }
    }
    Temp = arr[i + 1];
    arr[i + 1] = arr[High];
    arr[High] = Temp;

    return i + 1; 
}

void QuickSort(int arr[], int Low, int High) {
    if (Low < High) {
        int PartitionIndex = Partition(arr, Low, High); 
        QuickSort(arr, Low, PartitionIndex - 1); 
        QuickSort(arr, PartitionIndex + 1, High);
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
