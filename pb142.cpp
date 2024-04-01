#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    string n , m ;
    cin >> n >> m ;
    int size = 0 ;
    if (n.length() > m.length()) 
    {
        cout << "GREATER";
        return 0 ;
    } 
    else if (n.length() < m.length()) 
    {
        cout << "LESS";
        return 0 ;
    }
    if( n.size() >= m.size()) size = n.size() ;
    else size = m.size() ;
    for( int i = 0 ; i < size ; i++ )
    {
        if( n[i] > m[i] )
        {
            cout << "GREATER" ;
            return 0 ;
        }
        if( n[i] < m[i] )
        {
            cout << "LESS" ;
            return 0 ;
        }
    }
    cout << "EQUAL" ; 
}