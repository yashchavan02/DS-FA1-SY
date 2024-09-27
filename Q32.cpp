#include <iostream>
using namespace std;

struct list {
    int data;
    list *next;
};

class LinkedList {
    struct list *head;
public:
    LinkedList() {
        head = nullptr;
    }

    void append(int val) {
        struct list *ptr = new list;
        ptr->data = val;
        ptr->next = nullptr;
        if (head == nullptr) {
            head = ptr;
        } else {
            struct list *trav = head;
            while (trav->next != nullptr) {
                trav = trav->next;
            }
            trav->next = ptr;
        }
    }
    void addatfirst(){
        struct list *ptr1 = head;
        struct list *ptr2 = ptr1;
        while(ptr1->next){
          ptr2 = ptr1;
          ptr1 = ptr1->next;
        }
        ptr1->next = head;
        ptr2->next = nullptr;
        head = ptr1;
    }
    
    void printlist() {
        struct list *ptr = head;
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl; 
    }
};

int main() {
    LinkedList l;
    l.append(1);
    l.addatfirst();
    l.addatfirst();
    l.printlist();
    return 0;
}
