#include<iostream>
using namespace std;

struct List {
  int data;
  List *prev;
  List *next;
};

class DLinkedList {
  public:
  List *head;
  List *tail;
  
  DLinkedList(){
    head = nullptr;
    tail = nullptr;
  }

  void append(int data){
       List *nl = new List;
       if(!nl) return;
       nl->data = data;
       nl->next = nullptr;
       nl->prev = nullptr;
       if(!head){
         head = nl;
         tail = nl;
         return;
       }
       tail->next = nl;
       nl->prev = tail;
       tail = nl;
  }
  bool isPalindrome(){
    List *head1 = head;
    List *tail1 = tail;
    while(head1 && tail1){
      if(head1->data != tail1->data){
         return false;
      }
      else {
         head1 = head1->next;
         tail1 = tail1->prev;
      }
    }
    return true;
  }
};

int main(){
   DLinkedList l1;
   l1.append(0);
   l1.append(2);
   l1.append(3);
   l1.append(2);
   l1.append(0);
   cout<<l1.isPalindrome();
   return 0;
}
