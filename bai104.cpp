#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n , m ;
    cin >> n >> m ;
    int size_n = n.size() ;
    int size_m = m.size() ;
    int size = 0 ;
    if(n.size() > m.size()) size = n.size() ;
    else size = m.size() ;
    vector <char> vec ;
    for( int i = 0 ; i < size ; i++)
    {
       if(size_n > 0) 
       {
       vec.push_back(n[i]) ;
       size_n-- ;
       }
       if(size_m > 0) 
       {
       vec.push_back(m[i]) ;
       size_m-- ;
       }
    }
    for( auto x : vec )
    {
        cout << x ;
    }
}