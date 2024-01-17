#include<bits/stdc++.h>
using namespace std;

int findMissingElement(int arr[], int size) {
    int temp[size+1];
    for(int i=0; i<size+1;i++)
    temp[i] = 0;
    

    for (int i = 0; i < size-1; i++)
    {
        temp[arr[i]]++;
    }

    for (int i = 1; i < size+1; i++)
    {
        if(temp[i] == 0)
        return i;
    }
    return -1;
}

int findMissingElement(int arr[], int size) {
    int sum = 0;

    for(int i=0; i<size-1; i++) {
        sum += arr[i];
    }

    int sumTillN = size*(size+1) / 2;

    return sumTillN-sum;
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
        int arr[n-1];

        takeInput(arr,n-1);
        cout << "second max = " << findMissingElement(arr, n) << endl;
    }
    
    return 0;
}
