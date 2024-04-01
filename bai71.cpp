#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n , x , y ;
    cin >> n >> x >> y;
    int a[n] ;
    int s = 0 , f = n ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    sort( a , a + n ) ;
    for(int i=0 ; i<n ; i++){ 
        s++ ;
       if(x+y<=n && x>=s) cout << a[i] << " " ;
    }
    for(int i=0 ; i<n ; i++){
        f-- ;
       if(x+y<=n && n-y<=f) cout << a[i+n-y] << " " ;
    }
}