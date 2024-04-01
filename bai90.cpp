#include<bits/stdc++.h>

using namespace std ;
int S , i = 0  , D = 0 , B = 0 ;
int nhiphan(int n){
    while (n > 0){
        S = n % 2 ;
        n /= 2 ;
        i++ ;
        }
        return S ;
}
int doixung(int m){
    for(int j = 0 ; j < i ; j++){
        D = S % 10 ;
        S /= 10 ; 
        B = B*10 + D ;
    }
    return B ;
}
int main (){
    int n ;
    cin >> n ;
    if( n%2 == 0) cout << "No" ;
    else {

    }
}