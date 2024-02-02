#include <bits/stdc++.h>
using namespace std;

//Brute
void findFirstAndLastOccurence1(int arr[], int size, int key){
  //maintain pointers for both occurence
  int front = -1, back = -1;
  
  //front search
  for(int i=0; i<size; i++){
    if(arr[i] == key){
      front = i;
      break;
    }
  }
  
  //back search
  for(int i=size-1; i>=0; i--){
    if(arr[i] == key){
      back = i;
      break;
    }
  }
  
  //return ans
  cout << front << " " << back << endl;
}

//Optimal
void findFirstAndLastOccurence2(int arr[], int size, int key){
  int front = -1, back = -1, start = 0, end = size-1, mid;
  
  //search for first occurence
  while(start <= end){
    mid = start + (end-start)/2;
    
    if(arr[mid] == key){
      front = mid;
      end = mid-1;
    }
    else if(arr[mid] < key)
    {
      //go right
      start = mid+1;
    }
    else end = mid-1; //go left
  }
  
  
  start = 0, end = size - 1;
  
  //search for last occurence
  while(start <= end){
    mid = start + (end-start)/2;
    
    if(arr[mid] == key){
      back = mid;
      start = mid+1;
    }
    else if(arr[mid] < key)
    {
      //go right
      start = mid+1;
    }
    else end = mid-1; //go left
  }
  
  
  cout << front << " " << back << endl;
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
     
      cout << "Brute : ";
      findFirstAndLastOccurence1(arr,n,key);
      
      cout << "Optimal : ";
      findFirstAndLastOccurence2(arr,n,key);
      
      cout << endl;
    }
}
