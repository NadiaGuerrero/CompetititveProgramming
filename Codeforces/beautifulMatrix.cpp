//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int position = -1, element = 0, res;

    while(element == 0){
        position++;
        cin >> element;
    }

    res = abs(2-position/5) + abs(2-position%5);
    cout << res;

    return 0;
}
