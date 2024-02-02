int searchInRotatedArrayBruteForce(int arr[], int l, int h, int key){
        //linear Search
        for(int i=l; i<=h; i++)
        {
             if(arr[i] == key) return i;
        }
        return -1;
}

int searchInRotatedArrayOptimal(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //Apply Binary Search
        
        int start = l, end = h, mid, ans = -1;
        int e = h;
        while(start <= end){
            mid = start + (end-start) / 2;
            
            if(arr[mid] == key) {
                ans = mid;
                return ans;
            }
            
            //left sorted - go right but check if key is in left range
            else if(arr[mid] >= arr[0]){
                if(arr[mid] >= key && arr[0] <= key) end = mid-1;
                else start = mid+1;
            }
            
            //right sorted - go right but check if key is in right range
            else{
                if(arr[mid] <= key && arr[e] >= key) start = mid+1;
                else end = mid-1;
            }
        }
        
        return ans;
    }
