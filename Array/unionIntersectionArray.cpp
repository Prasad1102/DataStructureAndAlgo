#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {5, 6, 7, 8, 9, 10, 11, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Find Union
    cout << "Union: ";
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << arr2[i] << " ";
        }
    }
    cout << endl;

    // Find Intersection
    cout << "Intersection: ";
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    // Find Difference (arr1 - arr2)
    cout << "Difference (arr1 - arr2): ";
    for(int i = 0; i < n1; i++) {
        bool found = false;
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;

    // Find Symmetric Difference
    cout << "Symmetric Difference: ";
    // Elements in arr1 but not in arr2
    for(int i = 0; i < n1; i++) {
        bool found = false;
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << arr1[i] << " ";
        }
    }
    // Elements in arr2 but not in arr1
    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << arr2[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ unionIntersectionArray.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Union: 1 2 3 4 5 6 7 8 9 10 11 12 
// Intersection: 5 6 7 8 
// Difference (arr1 - arr2): 1 2 3 4 
// Symmetric Difference: 1 2 3 4 9 10 11 12 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 