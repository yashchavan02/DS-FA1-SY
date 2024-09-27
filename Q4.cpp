#include<iostream>
using namespace std;

struct medal {
   int key;
   string value;
};

int main(){

   int size, i, j, Element;
   int arr[] = {10, 0, 5, 4, 7 ,8, 12};
   size = sizeof(arr)/sizeof(arr[0]);
   int temp[size];

   for(int i=0;i<size;i++){
      temp[i] = arr[i];
   }

   struct medal maparr[size];

   for (i = 1; i < size; i++) {
        j = i - 1;
        Element = temp[i]; 
        while (j >= 0 && temp[j] < Element) {
            temp[j + 1] = temp[j];
            j--;
        }
        temp[j + 1] = Element;
   }

   for(int i = 0; i < size; i++){
      if(i == 0){
         maparr[i].key = temp[i];
         maparr[i].value = "Gold Medal";
      } else if(i == 1){
         maparr[i].key = temp[i];
         maparr[i].value = "Silver Medal";
      } else if(i == 2){
         maparr[i].key = temp[i];
         maparr[i].value = "Bronze Medal";
      } else {
         maparr[i].key = temp[i];
         maparr[i].value = to_string(i + 1);
      }
   }
   for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        if(arr[i] == maparr[j].key){
          cout<<maparr[j].value<<"\t";
        }
      }
   }
   return 0;
}
