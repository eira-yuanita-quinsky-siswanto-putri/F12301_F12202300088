#include <iostream>

using namespace std;

int main() {
    int X, arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool isFound = false;

    cout << "Masukkan X yang dicari: ";
    cin >> X;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (X == arr[i] && X % 2 == 0) {
            cout << "X ditemukan" << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "X tidak ditemukan" << endl;
    }

    return 0;
}
