#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void move(vector<int>& arr){
  sort(arr.begin(),arr.end());
}
int main() {

    vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
      move(arr);
    for (int e : arr)
       cout<<e << " ";
    return 0;
}

// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ g++ moveNegativeElementOneSide.cpp 
// prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ ./a.out 
// -7 -3 -1 2 4 5 6 8 9 prasad@prasad-inspiron-15-3511:~/Desktop/DSA/Array$ 