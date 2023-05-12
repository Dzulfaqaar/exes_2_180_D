#include <iostream>
using namespace std; 

int binarySearch(int arr[23], int n, int x) {
    int azfa = 0;
    int fikri = n - 1;

    while (azfa <= fikri) {
        int mid = (azfa + fikri) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        else if (x < arr[mid]) {
            fikri = mid - 1;
        }
        else {
            azfa = mid + 1;
        }
    }

    return -1; 
}

int main() {
    int arr[23] = { 2, 4, 6, 8, 10 };
    int n = sizeof(arr) / sizeof(arr[23]);

    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    int result = binarySearch(arr, n, x);

    if (result == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}

