#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("test.inp", "r", stdin);
    #endif
    string n ;
    
    while( getline( cin , n ))
    {
        vector < string > vec ;
        stringstream nn (n) ;
        string x ;
        while( nn >> x )
        {
            vec.push_back(x) ;
        }
        for( auto t : vec)
        {
            cout << t << " " ;
        }
        cout << "\n" ;
    }
}