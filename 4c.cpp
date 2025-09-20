#include <iostream>
using namespace std;
int main(){
 string c ;
 cout<<"enter c : " ;
 cin>>c ;
 string k = "aeiou";
 int n = c.length();
 for(int i = 0 ; i<=(n-1) ; i++){
     for(int j = 0 ; j<=4 ; j++){
         if (c[i]==k[j]){
             c.erase(i,1);
             i--;
             break ;
         }
     }
 }
 cout<<c ;
}