#include<bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ;
    getline ( cin , n ) ;
    map < char , int > mp ;
    for( auto x : n )
    {
        if((x != ' ') && (x >= '0' && x <= '9') || (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') ) mp[x]++ ;
    }
    for( auto x : mp )
    {
        cout << x.first << "    " << x.second << endl ;
    }
}