#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int resuelveCaso(int anyo) {
    int mi_anyo = anyo;

    // leemos la cantidad cada digito
    vector<int> pipos;
    int n_pipos;
    for (int i = 0; i < 10; i++) {
        cin >> n_pipos; 
        pipos.push_back(n_pipos);
    }

    // conseguimos los digitos
    vector<int> uvas_digit(10, 0);
    int n_digits = 4; // siempre son 4 digitos
    for (int i = 0; i < n_digits; i++) {
        uvas_digit[mi_anyo % 10] += 3; // necesitamos 3 uva con ese numero de pipos
        mi_anyo /= 10; // un digito menos
    }

    // cuantas personas le podemos dar con cada digito
    int min_personas = 1000000001;
    for (int i = 0; i < 10; i++) {
        if (uvas_digit[i] > 0) { // si necesitamos uvas con ese numero de pipos
            int personas_uva = pipos[i] / uvas_digit[i];
            if (personas_uva < min_personas)
                min_personas = personas_uva;
        }
    }

    return min_personas;
}

int main() {
    int anyo;
    cin >> anyo;
    while(anyo != 0) {
        cout << resuelveCaso(anyo) << endl;
        cin >> anyo;
    }
    return 0;
}
