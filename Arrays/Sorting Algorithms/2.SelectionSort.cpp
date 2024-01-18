#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size) {

    //keeps track of current index to swap with
    for(int i=0; i<= size-2; i++) {
        int smallest = i;

        //finds the smallest idx to swap with
        for(int j=i+1; j<size; j++) {
            if(arr[j] < arr[smallest])
            smallest = j;
        }

        //check if arr[i] is only smallest at that place
        if(smallest == i) continue;

        //else do swap
        swap(arr[i],arr[smallest]);
    }

}

void reversedSelectionSort(int arr[], int size) {

    //keeps track of current index to swap with
    for(int i=size-1; i>=1; i--) {
        int largest = i;

        //finds the largest idx to swap with
        for(int j=i-1; j>= 0; j--) {
            if(arr[j] > arr[largest])
            largest = j;
        }

        //check if arr[i] is only largest at that place
        if(largest == i) continue;

        //else do swap
        swap(arr[i],arr[largest]);
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
        reversedSelectionSort(arr,n);
        //selectionSort(arr,n);
        printArray(arr,n);
    }
    
    return 0;
}
