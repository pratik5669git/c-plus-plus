#include <iostream>

using namespace std;

bool uniqueOccurrences(int arr[], int size) {
    int counts[1000] = {0}; // Assuming elements are in the range 0 to 999
    bool unique = true;

    for (int i = 0; i < size; i++) {
        counts[arr[i]]++;
    }

    for (int i = 0; i < 1000; i++) {
        if (counts[i] > 1) {
            unique = false;
            break;
        }
    }

    return unique;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (uniqueOccurrences(arr, size)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
//not eqact ans is coming....