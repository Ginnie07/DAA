#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int size,i,j,temp,s=0,c=0,t,min=0;
    cin>>t;
    while(t--){
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    cin>>a[i];
     for(i=0;i<size-1;i++){
         for(j=i+1;j<size;j++){
             if(a[j]<a[min]){
             min=j;
             }
             c++;
         }
         swap(a[i],a[min]);
         s++;
        }
    for(i=0;i<size;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"comparisons ="<<c<<"\n";
    cout<<"swaps ="<<s<<"\n";
    }
} 