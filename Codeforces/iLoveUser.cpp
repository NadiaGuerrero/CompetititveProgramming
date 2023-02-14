// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, temp, lowest, greatest, amazing = 0;
    cin >> n >> temp;
    lowest = temp;
    greatest = temp;

    while(--n){
        cin >> temp;
        if((temp < lowest) || (temp > greatest)){
            amazing++;
            lowest = temp < lowest ? temp : lowest;
            greatest = temp > greatest ? temp : greatest;
        }
    }

    cout << amazing;

    return 0;
}
