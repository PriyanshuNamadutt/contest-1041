#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];

        unordered_set<int> s( a.begin(), a.end() );
        s.erase(-1);
        cout << ( s.size() >= 2 || s.count(0) ? "NO" : "YES" ) << endl; 
    }
    return 0;
}
