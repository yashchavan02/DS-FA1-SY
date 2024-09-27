#include<iostream>
using namespace std;

int main(){
int arr[] = {3,1,2,4,5,7,2,7,6,8,10};
int Size = sizeof(arr)/sizeof(arr[0]);

for (int i = 0; i < Size; i++){
  if(arr[i]%2==0){
    int temp = arr[i];
    for (int j = i ; j > 0; j--) {
          arr[j] = arr[j - 1];
    }
    arr[0] = temp;
  }
}  

for(int i=0;i<Size;i++){
   cout<<arr[i]<<" ";
}

return 0;
}

