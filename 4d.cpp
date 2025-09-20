#include <iostream>
using namespace std;
int main(){
     int n ;
     cout<<"enter n : ";
     cin>>n;
     string arr[n];
     cout<<"enter ele of arr : ";
     for(int i = 0 ; i<=n-1 ; i++){
         cin>>arr[i];
     }
     for(int i = 0 ; i<n-1 ; i++){
         for( int j = 0 ; j<n-1-i ; j++){
             if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]) ;
             }
         }
     }
     for(int i = 0 ; i<=n-1 ; i++){
         cout<<arr[i]<<" ";
     }

}