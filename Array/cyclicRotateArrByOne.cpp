#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Move the last element to the front
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    // Print the modified array
    for (int i = 0; i < n; i++) {
        std::cout << " " << arr[i];
    }

    return 0;
}


// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ cyclicRotateArrByOne.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
//  5 1 2 3 4prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 