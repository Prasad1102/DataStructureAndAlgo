#include<iostream>
using namespace std;
int main() {
  int arr[20], n, i;
  cout<<"\nEnter N :";
  cin>>n;
  for(i=0; i<n; i++) {
    cout<<"\nEnter Array["<<i+1<<"] :";
    cin>>arr[i];
  }
  int count = arr[0];
  for(i=0; i<n; i++){
    if(arr[i]!= count) {
      cout<<"\nMissing Element is :"<<count;
      count++;
    }
    count++;
  }
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ findMissingInt.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 

// Enter N :5

// Enter Array[1] :1

// Enter Array[2] :2

// Enter Array[3] :3

// Enter Array[4] :5

// Enter Array[5] :6

// Missing Element is :4prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 

// Enter N :5

// Enter Array[1] :1

// Enter Array[2] :3

// Enter Array[3] :5

// Enter Array[4] :6

// Enter Array[5] :7

// Missing Element is :2
// Missing Element is :4prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 