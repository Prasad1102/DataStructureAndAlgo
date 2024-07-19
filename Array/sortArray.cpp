#include <iostream>
using namespace std;

int main(){
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
    std::cout << "\nEnter Array[" << i << "]: ";
    std::cin >> arr[i];
  }

  cout<<"\nBefore Sorting Array\n";
  for (int i = 0; i < n; i++) {
    std::cout << "\nArray[" << i << "]: "<<arr[i];
  }

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout<<"\n After Sorting Array\n";
  for (int i = 0; i < n; i++) {
    std::cout << "\nArray[" << i << "]: "<<arr[i];
  }
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ sortArray.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Enter Number of Elements: 5

// Enter Array[0]: 1

// Enter Array[1]: 5

// Enter Array[2]: 2

// Enter Array[3]: 4

// Enter Array[4]: 3

// Before Sorting Array

// Array[0]: 1
// Array[1]: 5
// Array[2]: 2
// Array[3]: 4
// Array[4]: 3
//  After Sorting Array

// Array[0]: 1
// Array[1]: 2
// Array[2]: 3
// Array[3]: 4
// Array[4]: 5prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$