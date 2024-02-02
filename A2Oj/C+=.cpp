#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    int t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> n;
        int it = 0; // Initialize the counter for each set of inputs
        while(a <= n && b <= n) {
            if(a > b) {
                b += a;
            } else {
                a += b;
            }
            it++; // Increment the counter after each iteration
        }
        cout << it << "\n"; // Output the result for each set of inputs
    }
    return 0;
}
