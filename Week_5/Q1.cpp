#include<iostream>
using namespace std;

int main(){
    int size,k,i,z,m,t;
    cout<<"Enter testcases : ";
    cin>>t;
    while(t--){
     cin>>size;
     char a[size],max;
     for(i=0;i<size;i++)
     cin>>a[i];
     max=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]>max)
         max=a[i];
     }
     k=max-'a';
     int count[k+1];
     for(i=0;i<k+1;i++)
      count[i]=0;
     for(i=0;i<size;i++)
      ++count[a[i]-'a'];

     m=1;
      for(i=0;i<=k;i++){
         if(count[i]>m){
            m=count[i];
            z=i;
          }
        }  

     if(m==1)
          cout<<" No Duplicates Present";
     else
         cout<<char(97+z)<<" "<<"-"<<" "<<m<<"\n";
    }    
}