#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, k; cin >> n >> k;
        vector<ll> a(n), b(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];
        for ( int i = 0; i < n; i++ ) cin >> b[i];

        ll ans = 0;
        vector<pair<ll,ll>> arr(n);
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] > b[i] ) swap( a[i], b[i] );
            ans += b[i] - a[i];
            arr[i] = {a[i],b[i]};
        }
        sort( arr.begin(), arr.end() );
        ll mn = 2e9 + 5;
        for ( int i = 0; i < n-1; i++ ) {
            if ( arr[i+1].first > arr[i].second) mn = min( mn, 2*(arr[i+1].first - arr[i].second) );
            else mn = 0;
        }
        cout << ans + mn << endl;
    }
    return 0;
}
