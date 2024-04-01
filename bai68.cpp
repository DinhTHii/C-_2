#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ;
    int c=0 , d=0 ;
    for(int i = 0 ; i<n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i<n ; i++){
        cin >> b[i] ;
    }
    for(int i = 0 ; i<n ; i++){
        if(a[i]<b[i]){
            d++ ;
        }
        else if(a[i]>b[i]){
            c++ ;
        }
    }
    cout << c << " " << d ;
}
