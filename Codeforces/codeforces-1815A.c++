#include<iostream>
using namespace std;
const int N = 300010;
int a[N], b[N];
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            b[i] = a[i + 1] - a[i];
            if (i % 2 != 0) sum += b[i];
        }
        if (n % 2 != 0 || sum >= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}