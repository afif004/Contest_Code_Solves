#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    int overlap = (max(a, g) < min(d, j)) && (max(b, h) < min(e, k)) && (max(c, i) < min(f, l));

    if (overlap) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}
