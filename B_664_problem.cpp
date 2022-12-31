#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int resuelveCaso(int n_puentes) {
    int altura_min_puentes = 100000;
    for (int i = 0; i < n_puentes; i++) {
        int n_carriles;
        cin >> n_carriles;
        int altura_max_carril = 0;
        int h_carril;
        for (int j = 0; j < n_carriles; j++) {
            cin >> h_carril;
            if (h_carril > altura_max_carril)
                altura_max_carril = h_carril;
        }
        if (altura_max_carril < altura_min_puentes)
            altura_min_puentes = altura_max_carril;
    }
    return altura_min_puentes;
}

int main() {
    int n_puentes;
    std::cin >> n_puentes;
    while (n_puentes != 0) {
        cout << resuelveCaso(n_puentes) << endl;
        std::cin >> n_puentes;
    }

    return 0;
}
