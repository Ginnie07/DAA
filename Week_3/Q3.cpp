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
bool duplicates(int a[],int high){
    int i;
    for(i=0;i<=high;i++){
        if(a[i]==a[i+1])
        return true;
    }
    return false;
}
int main(){
    int size,i,j,temp,s=0,c=0,t,min=0;
    cout<<"Enter number of testcases : ";
    cin>>t;
    while(t--){
    cout<<"Enter size : ";
    cin>>size;
    int a[size];
    cout<<"Enter elements : ";
    for(i=0;i<size;i++)
    cin>>a[i];
    quicksort(a,0,size-1);
    if(duplicates(a,size-1))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
} 
