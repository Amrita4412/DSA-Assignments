#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int m = 0; // size of unique array
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr[j]) { found = true; break; }
        }
        if (!found) arr[m++] = arr[i];
    }

    cout << "Unique elements: ";
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    cout << endl;
}