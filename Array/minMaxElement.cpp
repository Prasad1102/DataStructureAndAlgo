#include <iostream>
using namespace std;
int main() {
  int n;
  int arr[10];
  int max, min;
  
  std::cout << "Enter Number of Elements: ";
  std::cin >> n;

  // Ensure n does not exceed the array size
  if (n > 10) {
    std::cout << "Error: Number of elements cannot exceed 10." << endl;
    return 1;
  }

  for (int i = 0; i < n; i++) {
    std::cout << "Enter Array[" << i << "]: ";
    std::cin >> arr[i];
  }

  // Initialize max and min with the first element
  max = arr[0];
  min = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  std::cout << "\nMax Element is: " << max;
  std::cout << "\nMin Element is: " << min;
  return 0;
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ minMaxElement.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Enter Number of Elements: 10
// Enter Array[0]: 2
// Enter Array[1]: 1
// Enter Array[2]: 3
// Enter Array[3]: 
// 6
// Enter Array[4]: 4
// Enter Array[5]: 3
// Enter Array[6]: 7
// Enter Array[7]: 9
// Enter Array[8]: 10
// Enter Array[9]: 18

// Max Element is: 18
// Min Element is: 1prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 
