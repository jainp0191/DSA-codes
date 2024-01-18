#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int size, int key) {
    int start = 0, end = size-1, mid;

    while(start <= end){
        //calculate mid
        mid = (start + end) / 2;

        //compare with key
        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) start = mid+1;

        else end = mid-1;
    }

    //not found
    return -1;
}

int binarySearchReversed(int *arr, int size, int key) {
    int start = 0, end = size-1, mid;

    while(start <= end){
        //calculate mid
        mid = start + (end-start) / 2;

        //compare with key
        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) end = mid-1;

        else start = mid+1;
    }

    //not found
    return -1;
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
        int arr[1000];

        int n,key;
        cin >> n >> key;
        takeInput(arr,n);

        //cout << binarySearch(arr,n,key) << endl;
        cout << binarySearchReversed(arr,n,key) << endl;
    }
    
    return 0;
}
