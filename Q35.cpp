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

    void seperate() {
        if (!head || !head->next) return;  
        list *odd = head; 
        list *even = head->next; 
        list *evenHead = even; 
        while (odd && even && even->next) {
            odd->next = even->next; 
            odd = odd->next;  
            if (odd) {
                even->next = odd->next; 
                even = even->next;   
            }
        }
        odd->next = nullptr;
        if (even) even->next = nullptr;
        printlist(head);
        cout<<endl;
        printlist(evenHead);
    }

    void printlist(struct list *ptr) {
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
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.append(6);
    l.append(7);
    l.seperate();
    return 0;
}
