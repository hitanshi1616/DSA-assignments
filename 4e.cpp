#include <iostream>
using namespace std;
int main(){
    string c ;
    cout<<"enter c : ";
    cin>>c;
    int a = c.length() ;
    int arr1[a];
    int arr2[a];
    for(int i = 0 ; i<a ; i++){
        arr1[i] = (int)c[i];
    }
    for(int i = 0 ; i<a ; i++){
        arr2[i] = arr1[i]-32;
    }
    for(int i = 0 ; i<a ; i++){
    cout<<char(arr2[i]);
    }
}