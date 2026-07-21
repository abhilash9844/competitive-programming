#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Example: Binary search interactive
    int lo = 1, hi = n;
    
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        
        cout << "? " << mid << endl;  // Query
        cout.flush();  // IMPORTANT: Flush after each query
        
        int response;
        cin >> response;
        
        if (response == 1) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    
    cout << "! " << lo << endl;  // Final answer
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}