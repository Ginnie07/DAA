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
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void add(int a[],int n,int k){
    quicksort(a,0,n-1);
    int l=0,r=1,flag=0;
    while(r<n){
        if(a[r]+a[l]==k){
            flag=1;
           cout<<a[r]<<" "<<a[l]<<"\n";
            l++;
            r=l+1;
        }
        else if (a[r]+a[l]>k)
            l++;  
        else
            r++;
    }
    if(flag==0)
    cout<<"no such pair \n";
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
        cout<<"Enter sum : ";
        cin>>k;
        add(a,size,k);
    }

}