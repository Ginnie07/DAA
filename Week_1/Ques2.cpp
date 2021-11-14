#include<iostream>
using namespace std;
int binary(int a[],int low,int high,int key,int c){
     if(high<low)
     return -1;
     else{
     int mid;
     mid=low+(high-low)/2;
     if(a[mid]==key){
      return c;
     }
     else if(a[mid]<key){
     return c=c+binary(a,mid+1,high,key,c);
     }
     else{
     return c=c+binary(a,low,mid-1,key,c);
     }
     }
}
int main(){
int t,n,i,key,result;
    cout<<"Enter number of testcases : ";
    cin>>t;
    while(t--){
        cout<<"Enter number of elements : ";
        cin>>n;
        int a[n];
        cout<<"Enter elements : ";
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter number to be found : ";
        cin>>key;
        result=binary(a,0,n-1,key,1);
        if(result==-1)
        cout<<"Element not present";
        else {
            cout<<"Element present" <<endl;
            cout<<"Comparisons= "<< result;
        }

    } 
}