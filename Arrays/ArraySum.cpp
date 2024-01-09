#include <iostream>
using namespace std;

int findSum(int arr[], int size);

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];
  
  int sum = findSum(arr,n);
  cout << "Sum of Array is : " << sum << endl;
  return 0;
}

int findSum(int arr[], int size){
  int sum = 0;
  for(int i=0; i<size; i++){
    sum += arr[i];
  }
  return sum;
}
