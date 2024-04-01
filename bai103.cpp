#include<bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ;
    while( getline( cin , n ) )
    {
        transform(n.begin(), n.end(), n.begin(), ::tolower);
        int dem = 0 ;
        for( auto x : n )
        {
            cout << x ;
            if( x == 'a' || x== 'o' || x == 'i' || x == 'y' || x == 'e' || x == 'u')
            {
                dem++ ;
            }
        }
        cout << dem << endl ;
    }
    

}