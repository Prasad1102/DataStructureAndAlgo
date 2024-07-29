// Input: arr[] = {1, 5, 7, -1}, K = 6
// Output:  2
// Explanation: Pairs with sum 6 are (1, 5) and (7, -1).

// Input: arr[] = {1, 5, 7, -1, 5}, K = 6
// Output:  3
// Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).  

#include<iostream>
using namespace std;
int main(){
  int arr[20], n, sum, count = 0;
  cout<<"\nEnter Number of integer in array :";
  cin>>n;
  for(int i=0; i<n; i++){
    cout<<"\nEnter Array["<<i+1<<"]:";
    cin>>arr[i];
  }
  cout<<"\nEnter a sum to find number of pair in the Array :";
  cin>>sum;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      int add = arr[i]+arr[j];
      if(add==sum) {
        cout<<"\nPair :"<<arr[i]<<" "<<arr[j];
        count++;
      }
    }
  }
  if(count > 0) {
    cout<<"\nNumber of Pairs ara :"<<count;
  } else {
    cout<<"\nPair not found";
  }
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 

// Enter Number of integer in array :6

// Enter Array[1]:1

// Enter Array[2]:2

// Enter Array[3]:3

// Enter Array[4]:4

// Enter Array[5]:5

// Enter Array[6]:6

// Enter a sum to find number of pair in the Array :6

// Pair :1 5
// Pair :2 4
// Pair :3 3
// Pair :4 2
// Pair :5 1
// Number of Pairs ara :5prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 