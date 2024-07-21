#include <iostream>
using namespace std;
int main() {
  int n, k;
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

  std::cout << "Enter k to find kth largest and kth smallest element : ";
  std::cin >> k;
  // Initialize max and min with the first element

  // Sort Array
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  max = arr[n-k-1];
  min = arr[k-1];

  std::cout <<"\n"<<k<<"th Largest Element is: " << max;
  std::cout <<"\n"<<k<<"th Smallest Element is: " << min<<"\n";
  return 0;
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ kthLargestSmallest.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Enter Number of Elements: 5
// Enter Array[0]: 1
// Enter Array[1]: 5
// Enter Array[2]: 2
// Enter Array[3]: 4
// Enter Array[4]: 3
// Enter k to find kth largest and kth smallest element : 2

// 2th Largest Element is: 3
// 2th Smallest Element is: 2
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 