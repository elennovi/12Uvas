#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int resuelveCaso() {
    int num;
    cin >> num;
    if (num < 0)
        return num;
    else
        return num - 1;
}

int main() {

    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        cout << resuelveCaso() << endl;


    return 0;
}
