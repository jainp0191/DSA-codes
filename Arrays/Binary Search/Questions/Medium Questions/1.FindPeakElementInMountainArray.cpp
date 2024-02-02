#include <bits/stdc++.h>
using namespace std;

int findPeakBrute(int arr[], int n) {
  
  //just apply linear search and check conditions
  
  for(int i=0; i<n; i++) {
    
    //check boundaries
    if(i == 0 && arr[i] > arr[i+1]) return i;
    else if(i == n-1 && arr[i] > arr[i-1]) return i;
    
    //is it peak? 
    else if(i>0 && arr[i] >= arr[i+1] && arr[i] >= arr[i-1]) return i;
  }
}


int peakElementOptimal(int arr[], int n) {
  int start = 0, end = n-1, mid;
  
  while(start <= end) {
    mid = start+ (end-start)/2;
    
    if(mid == n-1 && arr[mid] >= arr[mid-1]) return mid;
    else if(mid == 0 && arr[mid] >= arr[mid+1]) return mid;
    
    //peak element
    if(arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid + 1])
    return mid;
    
    //increasing sequence - right
    else if(arr[mid] < arr[mid+1])
    start = mid+1;
    
    else //decreasing sequence- left
    end = mid-1;
  }
}


int main(){
  int t;
  cin >> t;
  
  while(t--){
    int n;
    cin >> n;
    
    int arr[1000];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    //returns peak index
    cout << findPeakBrute(arr,n) << endl;
    cout << peakElementOptimal(arr,n) << endl;
  }
  return 0;
}
