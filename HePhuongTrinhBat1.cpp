#include <bits/stdc++.h>

using namespace std ;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double a, b, c, d, e, f ;
    cin >> a >> b >> c >> d >> e >> f ;
    if(a/d == b/e){
        if( a/d == c/f ) cout << "VOSONGHIEM" ;
        else cout << "VONGHIEM" ;
    }
    else {
        cout << fixed << setprecision(2) << (c*e-f*b) / (a*e-d*b) << " ";
        cout << fixed << setprecision(2) << (c - a*((c*e-f*b) / (a*e-d*b))) / b ;
    }

}
