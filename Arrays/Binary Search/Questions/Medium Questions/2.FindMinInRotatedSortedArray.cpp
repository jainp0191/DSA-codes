int findMinBrute(int arr[], int n){
        
        int mini = INT_MAX;
        
        for(int i=0; i<n; i++) {
            mini = min(arr[i],mini);
        }
        
        return mini;
    }

int findMinOptimal(int arr[], int n){
        
        //Applying Binary Search
        int start = 0, end = n-1, mid, ans = arr[0]; //edge case - 0 rotation
        
        while(start <= end) {
            
            mid = start + (end-start)/2;
            
            //increasingly sorted in right, move left
            if(arr[mid] < arr[0]){
                ans = arr[mid];
                end = mid-1;
            }
            else {  //increasingly left sorted, move right
                start = mid+1;
            }
        }
        
        return ans;
    }

