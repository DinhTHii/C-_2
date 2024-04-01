#include <bits/stdc++.h>
using namespace std  ;
int main(){
    int n , x ;
    cin >> n >> x ;
    int a[n] ;
    int s = 1 ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
        if(x>a[i]) s++ ; 
    }
    cout << s ;
}