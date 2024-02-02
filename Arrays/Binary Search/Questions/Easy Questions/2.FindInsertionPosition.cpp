#include <bits/stdc++.h>
using namespace std;

//brute - linear search
int findInsertionPosition1(int arr[], int size, int key){
  int index = size; //covers edge case when key is greater than all
  
  for(int i=0; i<size; i++){
    if(arr[i] == key){
      index = i;
      break;
    }
    
    else if(arr[i] > key){
      index = i;
      break;
    }
  }
  
  return index;
}

//optimal - binary search
int findInsertionPosition2(int arr[], int size, int key){
  int start = 0, end = size-1, index = size, mid;
  
  while(start <= end){
    mid = start + (end - start)/2;
    
    if(arr[mid] == key){
      index = mid;
      break;
    }
    
    else if(arr[mid] > key){
      index = mid;
      end = mid-1; //go left and search
    }
    
    else start = mid+1; //go right
  }
  
  return index;
}


void takeInput(int arr[], int size){
  for(int i=0;i<size;i++){
    cin >> arr[i];
  }
}

void printArray(int arr[], int size){
  for(int i=0; i<size; i++)
  cout << arr[i] << " ";
  
  cout << endl;
}


int main() 
{
    int t;
    cin >> t;
    
    while(t--){
      int arr[1000];
      
      int n, key;
      cin >> n >> key;
      takeInput(arr,n);
     
      cout << "Brute : " << findInsertionPosition1(arr,n,key) << endl;
      
      cout << "Optimal : " << findInsertionPosition2(arr,n,key) << endl;
      
      cout << endl;
    }
}
