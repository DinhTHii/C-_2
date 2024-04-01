#include <bits/stdc++.h>

using namespace std ;

long long FFFF(int x , int n){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long   S = 0 ;
    for(int i = 2 ; i <= n ; i += 2){
        S += pow(x,i) ;
    }
    return S ;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x , n ;  
    cin >> x >> n ;
    if(x>=0 && n >= 0){
        if(n%2!=0){
            n -= 1 ;
        }
    }
    else {
        return 0 ;
    }
    cout << FFFF(x, n ) ;
}