#include<iostream>
#include<string>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, x;
        cin >> n >> x;
        x -= 1;

        string s; cin >> s;
        int pos1 = -1, pos2 = -1;
        for ( int i = x+1; i < n; i++ ) {
            if ( s[i] == '#' ) {
                pos2 = i;
                break;
            }
        }
        for ( int i = x-1; i >= 0; i-- ) {
            if ( s[i] == '#' ) {
                pos1 = i;
                break;
            }
        }

        if ( (pos1 == -1 && pos2 == -1) || x == 0 || x == n-1 ) cout << 1 << endl;
        else if ( pos1 == -1 && pos2 != -1 ) cout << min( x+1, n-pos2+1 ) << endl;
        else if ( pos1 != -1 && pos2 == -1 ) cout << min( pos1+2, n-x ) << endl;
        else cout << max( min( x+1, n-pos2+1), min(pos1+2, n-x) ) << endl;
    }
    return 0;
}
