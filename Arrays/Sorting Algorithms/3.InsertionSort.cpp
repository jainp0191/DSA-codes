#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1; i<=size-1; i++) {
        for(int j=i; j>=1; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
}

void insertionSortReversed(int arr[], int n) {
    for(int i=(n-2); i>=0; i--) {
        for(int j=i; j<=(n-2); j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
            else break;
        }
    }
}

void insertionSortSmallest(int arr[], int n) {
     for(int i=1; i<=n-1; i++) {
        for(int j=i; j>=1; j--) {
            if(arr[j] > arr[j-1]) {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void takeInput(int arr[], int size) {
    for(int i=0; i<size; i++)
    cin >> arr[i];
}


int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        takeInput(arr,n);
        insertionSort(arr,n);
        //insertionSortSmallest(arr,n);
        printArray(arr,n);
        insertionSortReversed(arr,n);
        printArray(arr,n);
    }
    
    return 0;
}
