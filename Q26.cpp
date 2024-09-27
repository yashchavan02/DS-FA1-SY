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

    void removeDuplicate() {
        struct list *ptr1 = head;
        while (ptr1 != nullptr && ptr1->next != nullptr) {
            struct list *ptr2 = ptr1->next;
            while (ptr2 != nullptr && ptr1->data == ptr2->data) {
                ptr2 = ptr2->next;
            }
            ptr1->next = ptr2;
            ptr1 = ptr1->next;
        }
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
    l.append(1);
    l.append(2);
    l.append(2);
    l.append(2);
    l.append(3);
    l.append(3);
    l.append(3);
    l.append(3);
    l.append(3);
    l.append(3);
    l.append(5);
    l.removeDuplicate();
    l.printlist();
    return 0;
}

