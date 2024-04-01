#include<bits/stdc++.h>

using namespace std ;

int uocso(int n ){
    int S = 0 ;
    for(int i = 1 ; i <= n/2 ; i++){
        if(n%i==0){
            S += i ;
        }
    }
    return S ;
}


int kiemtra(int n ){
    for(int i = 1 ; i <= n/2 ; i++){
        if(n%i==0){
            cout << i << " " ;
        }
    }
    return n ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    if( n == uocso(n) ){
        cout << "Yes" << endl ;
        kiemtra(n) ;
    }
    else {
        cout << "No" << endl ; 
    }


}