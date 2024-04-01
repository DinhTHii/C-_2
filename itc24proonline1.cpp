#include<bits/stdc++.h>

using namespace std ;

void in()
{
    #ifndef ONLINE_JUGDE
    freopen("int.cpp" , "r" ,stdin ) ;
    freopen("out.cpp" , "w" ,stdout ) ;
    #endif
}

bool ktr( string n )
{
    if()
}
void out()
{
    string n ;
    cin >> n ;
    int dem = 0 ;
    for( int i = 0 ; i < n.size() ; i++ )
    {
        for(int j = i + 1 ; j < n.size() ; j++ )
        {
            if(ktr(n.substr( i , j ))) dem++ ;
        }
    }
}
int main ()
{
    in() ;
    out() ;
    return 0 ;
}