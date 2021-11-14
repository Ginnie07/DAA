#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
    int i=low-1,j,pivot=a[high],c=0,s=0;
    for(j=low;j<=high-1;j++){
        ++c;
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
            ++s;
        }
    }
    swap(a[i+1],a[high]);
    ++s;
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
    cout<<"Enter no. of test cases"<<" ";
    cin>>t;
    while(t--){
        int size,i,k,c,s;
        cout<<"Enter size : ";
        cin>>size;
        cout<<"Enter elements : ";
        int a[size];
        for(i=0;i<size;i++)
           cin>>a[i];
        quicksort(a,0,size-1);
        for(i=0; i<size; i++)
            cout << a[i] << ' ';
    }
}        