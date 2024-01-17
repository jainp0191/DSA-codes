#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size) {
    int i=0, j = size - 1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++,j--;
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
        reverseArray(arr, n);
        printArray(arr, n);
    }

    return 0;
}
