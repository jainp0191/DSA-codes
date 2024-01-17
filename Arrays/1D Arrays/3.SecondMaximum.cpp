#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
	int max = INT_MIN, smax;

    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            smax = max;
            max = arr[i];
        }

        //if its in right 
        if(arr[i] < max && arr[i] > smax)
        smax = arr[i];
    }
    if(smax == INT_MIN) return -1;
    return smax;
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
        cout << "second max = " << print2largest(arr, n) << endl;
    }
    
    return 0;
}
