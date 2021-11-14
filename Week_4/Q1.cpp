#include<iostream>
using namespace std;
int partition(int a[],int low,int high){
    int i=low-1,j,pivot=a[high];
    for(j=low;j<=high-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return (i+1);
}
void quicksort(int a[],int low,int high){
    if(low>=high)
    return ;
    else{
    int p;
    p=partition(a,low,high);
    quicksort(a,low,p-1);
    quicksort(a,p+1,high);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int a[n], i;
        for(i=0; i<n; i++) 
            cin >> a[i];
        cin >> k;
        quicksort(a, 0, n-1);
        cout<<a[k-1]<<"\n";
    }
}