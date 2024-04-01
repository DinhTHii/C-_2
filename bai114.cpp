#include<bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n ;
    cin >> n ;
    cin.ignore() ;
    string a ;
    getline(cin , a ) ;
    vector <char> vec ;
    for(int i = n%(int)a.length() ; i < (int)a.length() ; i++ )
    {
        vec.push_back(a[i]) ;
    }
    for(int i = 0 ; i < n%(int)a.length() ; i++ )
    {
        vec.push_back(a[i]) ;
    }
    for( auto x : vec )
    {
        cout << x ;
    }
}