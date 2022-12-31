#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct t_v {
    int uno, dos, tres;
};

t_v version_numerica(string v_s) {
    int primer_digito = 0;
    vector<int> vector_v;
    for (int i = 0; i < v_s.length(); i++) {
        if (v_s[i] == '.') {// get the digit
            string nueva = v_s.substr(primer_digito, i - primer_digito);
            vector_v.push_back(stoi(nueva, nullptr));
            primer_digito = i + 1; // siguiente digito
        }
    }
    // la ultima
    string nueva = v_s.substr(primer_digito, v_s.length() - primer_digito);
    vector_v.push_back(stoi(nueva, nullptr));

    return { vector_v[0], vector_v[1], vector_v[2] };
}

bool resuelveCaso() {
    bool sol;

    string v1_s, v2_s;
    cin >> v1_s >> v2_s;
    

    t_v v1 = version_numerica(v1_s);
    t_v v2 = version_numerica(v2_s);

    if (v1.uno == v2.uno) { // sigue siendo la misma version
        if (v1.dos == v2.dos) { // sigue siendo la misma version
            if (v1.tres == v2.tres) // sigue siendo la misma 
                sol = false;
            else if (v1.tres + 1 == v2.tres) // el resto tienen que ser 0
                sol = true;
            else sol = false;
        }
        else if (v1.dos + 1 == v2.dos && v2.tres == 0) // el resto tienen que ser 0
            sol = true;
        else sol = false;
    }
    else if (v1.uno + 1 == v2.uno && v2.dos == 0 && v2.tres == 0) // el resto tienen que ser 0
        sol = true;
    else sol = false;

    return sol;
}

int main() {
    int n_casos;
    cin >> n_casos;
    for (int i = 0; i < n_casos; i++) {
        bool ret = resuelveCaso();
        if (ret)
            cout << "SI" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
