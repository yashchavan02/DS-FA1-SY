#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    int Max, Secmax, termax,n;
    Max = INT_MIN;
    Secmax = INT_MIN;
    termax = INT_MIN;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array:\n";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){
        if (arr[i] > Max){
            termax = Secmax;
            Secmax = Max;
            Max = arr[i];
        }
        else if (arr[i] > Secmax && arr[i] < Max){
            Secmax = arr[i];
        }
        else if (arr[i] > termax && arr[i] < Secmax){
            termax = arr[i];
        }
    }
    Secmax = Secmax == INT_MIN ? Max : Secmax;
    termax = termax == INT_MIN ? Secmax : termax;
    cout<<"third maximum number in array is : "<<termax;
    return 0;
}
