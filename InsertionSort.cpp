void insertionSort(vector<int> &arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}



void insertionSortDecreasing(vector<int> &arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]>arr[j-1]){
            swap(arr[j],arr[j-1]);
            }
        }
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

   insertionSort(arr);

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

return 0;
}
