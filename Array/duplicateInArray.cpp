// Find duplicate element in array
#include <iostream>
using namespace std;

bool isPresent(int arr2[], int count, int num) {
  for(int i = 0; i < count; i++) {
    if(arr2[i] == num) {
      return true;
    }
  }
  return false;
}

int main() {
  int arr[20], n;
  int arr2[20];
  int count = 0;
  cout << "\nEnter Number of elements: ";
  cin >> n;
  for(int i = 0; i < n; i++) {
    cout << "\nEnter Array[" << i << "]: ";
    cin >> arr[i];
  }
  cout << "\nDuplicate Elements are: ";
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(arr[i] == arr[j]) {
        if(!isPresent(arr2, count, arr[i])) {
          arr2[count] = arr[i];
          count++;
        }
      }
    }
  }

  cout << "\nDuplicate Elements: ";
  for(int i = 0; i < count; i++) {
    cout << " " << arr2[i];
  }

  return 0;
}
