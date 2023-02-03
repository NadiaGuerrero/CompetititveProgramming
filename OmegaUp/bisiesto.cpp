#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int entero;
    cin >> entero;
    bool esMul4, esMul100, esMul400;
    esMul4 = (entero%4) == 0;
    esMul100 = (entero%100) == 0;
    esMul400 = (entero%400) == 0;
    if(esMul4)
        if(esMul100)
            if(esMul400)
            cout << "Es bisiesto";
            else
            cout << "No es bisiesto";
        else
        cout << "Es bisiesto";
    else
    cout << "No es bisiesto";
    
    return 0;
}

//Este tuvo el menor tiempo
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int entero;
    cin >> entero;
    bool esMul4, esMul100, esMul400;
    esMul4 = (entero%4) == 0;
    esMul100 = (entero%100) == 0;
    esMul400 = (entero%400) == 0;
    if((esMul4)&&(!esMul100||(esMul100&&esMul400)))
        cout << "Es bisiesto";
    else
    cout << "No es bisiesto";
    
    return 0;
}

//El codigo mas corto pero con tiempo igual al del primero
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int entero;
    cin >> entero;
    if(((entero%4) == 0)&&(entero%100||((entero%400) == 0)))
        cout << "Es bisiesto";
    else
    cout << "No es bisiesto";
    
    return 0;
}