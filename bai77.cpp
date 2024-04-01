#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int s=2 , u=1 , f=0  ;
    for(int i=0 ; i<=n ; i++){
        if(i==0) cout << "2" << " " ;
        else if(i==1) cout << "1" << " " ;
        else if(i>=2) { 
            f = s + u ; cout << f << " " ;
            s = u ;
            u = f ;
        }     
    }
}