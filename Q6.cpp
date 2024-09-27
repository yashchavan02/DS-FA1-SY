#include <iostream>
using namespace std;

struct maptable {
    int key;
    int value;
};

int main() {
    int arr[] = {25, 7, 1, 1, 5, 7, 1, 10, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    struct maptable maparr[size];
    int uniq = 0;

    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < uniq; j++) {
            if (maparr[j].key == arr[i]) {
                maparr[j].value++;
                found = true;
                break;
            }
        }
        if (!found) {
            maparr[uniq].key = arr[i];
            maparr[uniq].value = 1;
            uniq++;
        }
    }

    int i, j;
    struct maptable keyele;
    for (i = 1; i < uniq; i++) {
        keyele = maparr[i];
        j = i - 1;
        while (j >= 0 && (maparr[j].value > keyele.value || 
                         (maparr[j].value == keyele.value && maparr[j].value == 1 && maparr[j].key > keyele.key))) {
            maparr[j + 1] = maparr[j];
            j--;
        }
        maparr[j + 1] = keyele;
    }
    for (int i = 0; i < uniq; i++) {
        cout << maparr[i].key<<" ";
    }
    return 0;
}
