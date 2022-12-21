#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int best = -2e9;
    for (int i = 0; i < n; i++) {
        int f, t;
        cin >> f >> t;
        best = max(best, f - max(t - k, 0));
    }
    cout << best << '\n';
}
