#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,m; cin>>n>>m;
	int a[n][m];
	for(int i=0; i < n; i++){
		for(int j = 0 ; j < m ; j++){
		cin >> a[i][j];
	}
	}
	int B[100] ;
	   for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
			    B[ i*m + j ] = a[j][i] ;
            
			    //cout << B[ i*m + j ] << " ";
		    }           
        }
cout << endl ;
sort( B , B + n*m ) ;
 for (int i = 0; i < m*n; i++){
        
			cout << B[i] << " ";
	       
    }
}