#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    int c = 0;
    cout<<" enter ele of array : ";
    for (int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }

    for (int i = 0 ; i<n-1 ; i++ ){
        for(int j = i+1 ; j<=n-1 ; j++){
            if(arr[i]>arr[j]){
                c++ ;
             cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
     }

    cout<<"there are "<<c<<" inversion pairs in our array " ;
    return 0 ;

}