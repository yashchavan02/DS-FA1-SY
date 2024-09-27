#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    int findLoopLength() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return countLoopLength(slow);
            }
        }
        return 0;
    }
private:
    int countLoopLength(Node* loopNode) {
        int length = 1;
        Node* temp = loopNode;
        while (temp->next != loopNode) {
            temp = temp->next;
            length++;
        }
        return length;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.head->next->next->next->next->next = list.head->next; 
    int loopLength = list.findLoopLength();
    if (loopLength > 0)
        cout << "Length of the loop is: " << loopLength << endl;
    else
        cout << "No loop detected in the list." << endl;
    return 0;
}
