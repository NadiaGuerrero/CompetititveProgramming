// https://codeforces.com/contest/1352/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int k, i, mod;
    long div, n;
    cin >> i;

    while(i--){
        cin >> n >> k;
        div = n/k; mod = n%k;
        if((div<1)||((k%2==0)&&(n%2==1))||((div<2)&&(mod%2==1)))
            cout << "NO";
        else{
            cout << "YES" << endl;
            if(mod%2){
                div--;
                mod+=k;
            }
            cout << div+mod << " ";
            while(--k)
                cout << div << " ";
        }
        cout << endl;
    }
    return 0;
}        