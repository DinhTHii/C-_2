#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double x ;
    cin >> x ;
    double n = 1 , S = 1 ;
    while((pow(x,n)/tgamma(n + 1)) > pow(10,-13)){
        S += pow(x,n)/tgamma(n + 1) ;
        n++ ;
    }
    cout << fixed << setprecision(4) << S ;
}