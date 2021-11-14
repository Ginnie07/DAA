#include<iostream>
using namespace std;

int main(){
  int i,n,m,j;
  cout<<"Enter size of 2 array : ";
  cin>>m>>n;
  int a[m],b[n];
  cout<<"Enter elements of 1st array : ";
  for(i=0;i<m;i++)
     cin>>a[i];
  cout<<"Enter elements of 2nd array : ";
  for(i=0;i<n;i++)
     cin>>b[i];
  i=0,j=0;
  while(i<m && j<n){
   if(a[i]<b[j])
     i++;
    else if(a[i]>b[j])
      j++;
    else 
    {
      cout<<b[j]<<" ";
      i++;
      j++;
    }
        
  }  
} 