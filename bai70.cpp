#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n>=3){
    bool m = true;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1 && a[i] > a[i-1]) {
            m = false;
            break;
        } else if (i % 2 == 0 && a[i] < a[i-1]) {
            m = false;
            break;
        }    
    }
    bool s = true;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1 && a[i] < a[i-1]) {
            s = false;
            break;
        } else if (i % 2 == 0 && a[i] > a[i-1]) {
            s = false;
            break;
        }
    }

    if (m || s ) {
        cout << "Yes" << endl;
    } 
    else {
        cout << "No" << endl;
    }
    }
    return 0;
}