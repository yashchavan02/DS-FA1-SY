#include<iostream>
using namespace std;

int main(){
   string a = "acat";
   string b = "tad";
   int a1 = 0;
   int b1 = 0;
   for(int i=0;i<a.size();i++){
      a1 += (a[i] - 'a');
   }
   for(int i=0;i<b.size();i++){
      b1 += (b[i] - 'a');
   }
   int c = a1^b1;
   if(c == 0){
      cout<<"is anagram"<<endl;
   }
   else {
      cout<<"not is anagram"<<endl;      
   }
   return 0;
}