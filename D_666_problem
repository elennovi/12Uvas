#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string sin_puntuacion_minusc(string s) {
    string n_s = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '.' && s[i] != ';' && s[i] != ':' && s[i] != ' ' && s[i] != ',')
            n_s.push_back(tolower(s[i]));
    
    return n_s;
}

bool resuelveCaso() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    string n_s1 = sin_puntuacion_minusc(s1);
    string n_s2 = sin_puntuacion_minusc(s2);

    return n_s1 == n_s2; // si son iguales es porque es la misma
}

int main() {
    int n_casos;
    cin >> n_casos;
    char aux;
    cin.get(aux);

    for (int i = 0; i < n_casos; i++) {
        bool ret = resuelveCaso();
        if (ret)
            cout << "SI" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
