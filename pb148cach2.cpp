#include<bits/stdc++.h>
using namespace std ;
struct sinhvien
{
    string ho , ten ;
    string diem ;
};
void in() 
{
    #ifndef ONLINE_JUDGE
        freopen( "int.cpp" , "r" , stdin ) ;
        freopen( "out.cpp" , "w" , stdout ) ;
    #endif
}
void out() 
{
    vector<sinhvien> vc ;
    string n , ho , ten , diem ;
    cout << "<?xml version=1 encoding=UTF-8?>\n" ; 
    while( getline(cin , n ))
    {
        stringstream nn (n) ;
        getline( nn , ho , '|' ) ;
        getline( nn , ten , '|' ) ;
        getline( nn , diem , '|' ) ;
        vc.push_back({ho,ten,diem}) ;
        if( stoi(diem) >= 5 )
        {
            cout << "<Student>\n" ;
            for( sinhvien x : vc )
            {
                cout << "     <LastName>"<< x.ho << "</LastName>\n" ;
                cout << "     <FirstName>" << x.ten << "</FirstName>\n" ;
                cout << "     <Mark>" << x.diem << "</Mark>\n" ;
            }
            cout << "</Student>\n" ;
        }
        vc.clear() ;
    }
    
}
int main ()
{
    in() ;
    out() ;
    return 0 ;
}