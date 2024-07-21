#include <iostream>
using namespace std;

int main() {
  int arr[20], n;
  int revArr[20];

  std::cout << "Enter Number of Elements: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << "Enter Array[" << i << "]: ";
    std::cin >> arr[i];
  }

  std::cout<<"Before Reverse Array\n";
  for (int i = 0; i < n; i++) {
    std::cout << "\nArray[" << i << "]: "<<arr[i];
  }

  for (int i = 0; i < n; i++) {
    revArr[i] = arr[n - 1 - i];
    // first iteration is :
    // revArr[0] = arr[5-1-0 = 4] means last element
  }

  std::cout<<"\n\nAfter Reverse Array\n";
  for (int i = 0; i < n; i++) {
    std::cout << "\nArray[" << i << "]: "<<revArr[i];
  }
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ reverseArray.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Enter Number of Elements: 5
// Enter Array[0]: 1
// Enter Array[1]: 2
// Enter Array[2]: 3
// Enter Array[3]: 4 
// Enter Array[4]: 5
// Before Reverse Array

// Array[0]: 1
// Array[1]: 2
// Array[2]: 3
// Array[3]: 4
// Array[4]: 5

// After Reverse Array

// Array[0]: 5
// Array[1]: 4
// Array[2]: 3
// Array[3]: 2
// Array[4]: 1prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 