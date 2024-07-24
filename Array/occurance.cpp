#include <iostream>
using namespace std;

int main() {
  int arr[20], n, k;
  int revArr[20];
  int occ=0;

  std::cout << "Enter Number of Elements: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << "Enter Array[" << i << "]: ";
    std::cin >> arr[i];
  }

  std::cout << "Enter K to find occurance: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    if(arr[i]==k) {
      occ++;
    }
  }
  std::cout <<"\nOccurance of"<< k <<"in Array: "<<occ<<"\n";
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ occurance.cpp -
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// Enter Number of Elements: 5
// Enter Array[0]: 1
// Enter Array[1]: 1
// Enter Array[2]: 2
// Enter Array[3]: 1
// Enter Array[4]: 3
// Enter K to find occurance: 1

// Occurance of1in Array: 3
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 