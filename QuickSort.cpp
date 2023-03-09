int partition(vector<int> &arr, int st, int end){
    
    int pivotElement=arr[st];

    int i=end+1;

    for(int j=end; j>st; j--){
        if(arr[j]>pivotElement){
            i--;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[st],arr[i-1]);
    int pivot=i-1;
    

    return pivot;

}

void quickSort(vector<int> &arr, int st, int end){
    
    if(st>=end) return;

    int pivot = partition(arr,st,end);
    quickSort(arr,st,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
