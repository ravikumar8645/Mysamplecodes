void bubbleSortOptimized(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) return;
    }
}

int main(){
    int n;
    cout<<"Enter the length of Array"<<endl;
    cin>>n;
    cout<<"Enter the elements of Array"<<endl;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }

    bubbleSortOptimized(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
