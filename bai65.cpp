#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    int a[n] , b[n] ;
    int S = 0 , D = 0 ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    for(int i=0 ; i<n ; i++){
        cin >> b[i] ;
    }
    for(int i=0 ; i<n ; i++ ){
        S = a[i]*b[i] ;
        D += S ;
    }
    if(D == 0){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
}