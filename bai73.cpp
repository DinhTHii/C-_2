#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    int a[n] ;
    int S = 0 ;
    bool Q = true ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    } 
    for(int i=0 ; i<n ; i++){
        if(a[i] != a[n-S-1]){
            Q = false ;
            break;
        }
        else {
            S++ ;
        }
    }
    if(Q) {
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }

}