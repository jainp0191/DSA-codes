#include<bits/stdc++.h>
using namespace std;


void rotateArray(int arr[], int size) 
{
    int temp = arr[size-1];

    for(int i=size-2; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
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
        rotateArray(arr, n);
        printArray(arr, n);
    }

    return 0;
}
