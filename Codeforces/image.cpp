//https://codeforces.com/contest/1721/problem/A
#include <bits/stdc++.h>
using namespace std;

bool checkDuplicate(vector<char>& v, char element){
    bool isDuplicated = false;
    for(int i=0;(i<v.size()&&isDuplicated==false);i++)
        isDuplicated = v[i] == element;
    return isDuplicated;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t, res; char s1, s2; 
    vector<char> colors;
    cin >> t;

    while(t--){
        cin >> s1 >> s2;
        colors.push_back(s1);
        if(s1!=s2)
            colors.push_back(s2);
        cin >> s1 >> s2;
        if(!checkDuplicate(colors,s1))
            colors.push_back(s1);
        if((s1!=s2)&&(!checkDuplicate(colors,s2)))
            colors.push_back(s2);

        res = colors.size()-1;
        cout << res << endl;

        colors.clear();
    }
    return 0;
}
