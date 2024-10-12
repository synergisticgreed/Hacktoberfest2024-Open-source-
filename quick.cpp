//Quick Sort
int partition(vector<int> &arr, int low, int high){
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(i<high && arr[i]<=pivot) i++;
            while(j>low && arr[j]>pivot) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;    
    }
    void quickSort(vector<int> &arr, int low, int high){
        if(low<high){
            int q=partition(arr,low,high);
            quickSort(arr,low,q-1);
            quickSort(arr,q+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
