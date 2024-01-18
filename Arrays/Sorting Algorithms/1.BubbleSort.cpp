#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size) {
    bool isSwapped = false;
    for(int i=1; i<= size-1; i++){
        for(int j=0; j<= size-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped) return;
    }
}

void bubbleSortReversed(int arr[], int n) {
    bool isSwapped = false;

    for(int i=1; i<= n-1; i++) {
        for(int j=n-1; j >= i; j--) {
            if(arr[j] > arr[j-1]) {
                swap(arr[j],arr[j-1]);
                isSwapped = true;
            }
        }
        if(!isSwapped) return;
    }
}

void bubbleSortSmallest(int arr[], int n) {
    bool isSwapped = false;

    for(int i=1; i<= n-1; i++) {
        for(int j=n-1; j >= i; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j],arr[j-1]);
                isSwapped = true;
            }
        }
        if(!isSwapped) return;
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
        //bubbleSort(arr,n);
        bubbleSortSmallest(arr,n);
        printArray(arr,n);
        bubbleSortReversed(arr,n);
        printArray(arr,n);
    }
    
    return 0;
}
