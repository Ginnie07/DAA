#include<stdio.h>
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
int diff(int a[],int n,int k){
    int c=0;
    quicksort(a,0,n-1);
    int l=0,r=0;
    while(r<n){
        if(a[r]-a[l]==k){
            c++;
            l++;
            r++;
        }
        else if (a[r]-a[l]>k)
            l++;  
        else
            r++;
    }
    return c;
}
int main(){
    int size,t,i,k,c;
    cout<<"Enter no. of test cases"<<" ";
    cin>>t;
    while(t--){
        cout<<"Enter size : ";
        cin>>size;
        cout<<"Enter elements : ";
        int a[size];
        for(i=0;i<size;i++)
           cin>>a[i];
        cout<<"Enter difference : ";
        cin>>k;
        c=diff(a,size,k);
        cout<<"Count is = "<<c<<"\n";
    }

}
