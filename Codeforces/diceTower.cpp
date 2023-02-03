//https://codeforces.com/problemsets/acmsguru/problem/99999/533
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n;
    cin >> n;
    if (n>=30)
        n = (n%14)<=12 && (n%14)>=2 ? n/14 : -1 ;
    else
        n = n==21 ? 1 : -1 ;
    cout << n;

    return 0;
}        