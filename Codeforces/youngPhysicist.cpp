// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, x, y, z, rx = 0, ry = 0, rz = 0;

    cin >> n;

    while(n--){
        cin >> x >> y >> z;
        rx += x;
        ry += y;
        rz += z;
    }

    if((rx == 0)&&(ry == 0)&&(rz == 0))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
