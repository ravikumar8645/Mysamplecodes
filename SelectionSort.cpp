void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
           if(arr[min]>arr[j]){
            min = j;
           }
        }
        swap(arr[min],arr[i]);
    }
}

void selectionSortDecreasing(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int max =i;
        for(int j=i+1; j<n; j++){
           if(arr[max]<arr[j]){
            max=j;
           }
        }
        swap(arr[max],arr[i]);
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

    selectionSortDecreasing(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
