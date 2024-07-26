#include <iostream>
using namespace std;

bool is_present(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int union_s(int arr1[], int arr2[], int result[], int n1, int n2) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!is_present(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!is_present(result, k, arr2[i])) {
            result[k++] = arr2[i];
        }
    }
    return k;
}

int intersection(int arr1[], int arr2[], int result[], int n1, int n2) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && !is_present(result, k, arr1[i])) {
                result[k++] = arr1[i];
                break;
            }
        }
    }
    return k;
}

int difference(int arr1[], int arr2[], int result[], int n1, int n2) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!is_present(arr2, n2, arr1[i]) && !is_present(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }
    return k;
}

int symmetric_difference(int arr1[], int arr2[], int result[], int n1, int n2) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!is_present(arr2, n2, arr1[i]) && !is_present(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!is_present(arr1, n1, arr2[i]) && !is_present(result, k, arr2[i])) {
            result[k++] = arr2[i];
        }
    }
    return k;
}

void display(int result[], int size) {
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[100], arr2[100], result[200];
    int n1, n2;
    int ch = 9;
    cout << "Enter size of array 1: ";
    cin >> n1;
    cout << "Enter size of array 2: ";
    cin >> n2;
    cout << "\n\n";
    for (int i = 0; i < n1; i++) {
        cout<<"\nEnter Array1["<<i+1<<"] :";
        cin >> arr1[i];
    }
    cout << "\n\n";
    for (int i = 0; i < n2; i++) {
        cout<<"\nEnter Array2["<<i+1<<"] :";
        cin >> arr2[i];
    }

    cout << "\n\nEnter operation:\n";
    cout << "1. Union\n";
    cout << "2. Intersection\n";
    cout << "3. Difference\n";
    cout << "4. Symmetric Difference\n";
    cout << "0. Exit\n";

    while (ch != 0) {
        cout << "Enter your choice: ";
        cin >> ch;
        int size = 0;
        switch (ch) {
            case 1:
                size = union_s(arr1, arr2, result, n1, n2);
                display(result, size);
                break;
            case 2:
                size = intersection(arr1, arr2, result, n1, n2);
                display(result, size);
                break;
            case 3:
                size = difference(arr1, arr2, result, n1, n2);
                display(result, size);
                break;
            case 4:
                size = symmetric_difference(arr1, arr2, result, n1, n2);
                display(result, size);
                break;
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }
    return 0;
}
