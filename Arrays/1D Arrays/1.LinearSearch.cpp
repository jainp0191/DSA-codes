#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    int idx = 0;

    while(idx < size) {
        //check if its key
        if(arr[idx] == key)
        return idx;

        idx++;
    }
    //not found
    return -1;
}

int main() {
    //testcases
    int t;
    cin >> t;

    while(t--){
        //input array size
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        cin >> arr[i];

        //ask for key to search
        int key;
        cin >> key;

        //search
        int ans = linearSearch(arr, n, key);

        (ans != -1) ? cout << "key found at index = " << ans << endl : cout << "Key does not exist !" << endl;
    }

    return 0;
}
