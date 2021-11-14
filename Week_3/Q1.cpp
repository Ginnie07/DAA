#include<iostream>
using namespace std;
int main(){
    int size,i,j,temp,s=0,c=0,t;
    cin>>t;
    while(t--){
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
     cin>>a[i];
    for(i=1;i<size;i++){
    j=i-1;
    while(j>=0 && a[j+1]<a[j])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        j--;
        c++;
        s++;
    }
    s++;
    }
    for(i=0;i<size;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    cout<<"comparisons ="<<c<<"\n";
    cout<<"shifts ="<<s<<"\n";
    }

}