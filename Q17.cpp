#include <iostream>
using namespace std;

struct List {
    int data;
    struct List *next;
};

class LinkedList {
public:
    List *head;
    LinkedList() {
        head = nullptr;
    }
    
    void append(int data) {
        List *nl = new List;
        nl->data = data;
        nl->next = nullptr;
        
        if (!head) {
            head = nl;
            return;
        }
        
        List *trav = head;
        while (trav->next) {
            trav = trav->next;
        }
        
        trav->next = nl;
    }

    List* nthnode(int pos) {
        struct List *first = head;
        
        for (int i = 1; i < pos; i++) {
            if (first == nullptr) {
                cout << "Position not found";
                return NULL;
            }
            first = first->next;
        }
        return first;
    }

    void printList(struct List *ptr) {
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
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
    l.append(8);
    l.append(9);
    cout << l.nthnode(1)->data; 
    return 0;
}
