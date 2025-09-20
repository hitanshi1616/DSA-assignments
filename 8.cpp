#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    int c = n ;
    cout<<"enter values of array : " ;
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }

    for(int j = 0 ; j<n-1 ; j++){
        for(int k = n-1 ; k>0 ; k-- ){
             if(j<k){
              if(arr[j]==arr[k]){
                 c-- ;
            }
          }
        }
        if (arr[j]==arr[j+1]){
            break ;
        }
    }

    cout<<"the number of distinct elements in array are : "<<c<<endl ;
    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}