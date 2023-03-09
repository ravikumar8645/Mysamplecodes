void merge(vector<int> &arr, int st, int mid, int end){
    int a = mid-st+1;
    int b = end-mid;

    vector<int> left(a);
    vector<int> rgt(b);

    for(int i=0; i<a; i++) left[i]=arr[st+i];
    for(int i=0; i<b; i++) rgt[i]=arr[mid+1+i];

    int i=0; 
    int j=0;
    int k=st;

    while(i<a && j<b){
        if(left[i]<rgt[j]){
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=rgt[j++];
        }
    }

    while(i<a){
        arr[k++]=left[i++];
    }
    while(j<b){
        arr[k++]=rgt[j++];
    }
}


void mergeSort(vector<int> &arr, int st, int end){
    if(st>=end) return;

    int mid = (st+end)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,st,mid,end);
}


int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
