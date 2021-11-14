#include<iostream>
using namespace std;

int binary(int a[],int low,int high,int key){
    int i,c=0;
    int mid;
    if(low>high)
    return -1;
    else{
    mid=low+(high-low)/2;
    if(key>a[mid])
    return binary(a,mid+1,high,key);
    else if(key<a[mid])
    return binary(a,low,mid-1,key);
    else if(key==a[mid]){
        i=mid;
        while(a[i]==a[mid]){
        c++;
        i++;
        }
    }
     return c;
    }
}
int main(){
    int size,t,i,key,low,high,c;
    cout<<"Enter no. of test cases"<<" ";
    cin>>t;
    while(t--){
        cout<<"Enter size : ";
       cin>>size;
       low=0,high=size-1;
       int a[size];
       cout<<"Enter elements : ";
       for(i=0;i<size;i++)
           cin>>a[i];
        cout<<"Enter key : ";
       cin>>key;
       c=binary(a,0,9,key);
       if(c==-1)
        cout<<"key not present";
       else
        cout<<key<<" "<<"-"<<" "<<c;
       cout<<"\n";
    }
}