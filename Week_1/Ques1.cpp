#include<iostream>
using namespace std;
int main(){
    int t,n,i,key,flag=0;
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
        for(i=0;i<n;i++){
            if(a[i]==key){
                flag=1;
                cout<<"Present "<<i+1<<"\n";
                break;
            }
        }
        if(flag==0)
        cout<<"Not present ";
    }
}