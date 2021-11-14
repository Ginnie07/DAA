#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[],int key,int n){
    int step=sqrt(n);
     int prev = 0;
    while (arr[step-1] < key)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < key)
    {
        prev++;
        if (prev == step)
            return -1;
    }
    if (arr[prev] == key)
        return prev;
   return -1;
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
        result=jump(a,key,n);
        if(result==-1)
        cout<<"Element not present";
        else 
        cout<<"Element present at index = " <<result;
}
}