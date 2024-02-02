#include <bits/stdc++.h>
using namespace std;

//Brute
int findSquareRoot1(int target){
  int num = 1;
  
  while(num*num <= target){
    num++;
  }
  
  return (num-1);
}


//Optimal
int findSquareRoot2(int target){
  int start = 1, end = target, ans = 0, mid;
  
  while(start <= end){
    mid = start + (end - start)/2;
    
    if(mid * mid > target){
      end = mid-1; //search left
    }
    else if(mid * mid < target){
      ans = mid;
      start = mid+1; //search right
    }
    
    else {
      ans = mid;
      break;
    }
  }
  
  return ans;
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
     // int arr[1000];
      
      int target;
      cin >> target;
      //takeInput(arr,n);
     
      cout << "Brute : " << findSquareRoot1(target) << endl;
      
      cout << "Optimal : " << findSquareRoot2(target) << endl;
      
      cout << endl;
    }
}
