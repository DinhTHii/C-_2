#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> sorted_indices(n);
    for (int i = 0; i < n; ++i) {
        sorted_indices[i] = i;
    }

    sort(sorted_indices.begin(), sorted_indices.end(),[&a](int i, int j) { return a[i] > a[j]; });
    vector<int> ranks(n);
    int current_rank = 1;

    for (int i = 0; i < n; ++i) {
        int index = sorted_indices[i];
        
        if (i > 0 && a[sorted_indices[i - 1]] == a[index]) {
            ranks[index] = ranks[sorted_indices[i - 1]];
        } else {
            ranks[index] = current_rank;
        }

        ++current_rank;
    }
    for (int rank : ranks) {
        cout << rank << endl;
    }
}
