#include <iostream>
#include <vector>
using namespace std;




int main() {
    srand(time(0));   
    
    int n, i, j, t, x, c, indice;
    bool scambio;

    cout << "quanti numeri ci sono?" << endl;
    cin >> n;
    int numeri[n];

    i = 0;
    while (i < n) {
        numeri[i] = 1 + rand() % n;
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (numeri[j] > numeri[j + 1]) {
                t = numeri[j];
                numeri[j] = numeri[j + 1];
                numeri[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "Il" << i + 1 << "numero è" << numeri[i] << endl;
        i = i + 1;
    }
    cout << "Che valore vuoi trovare?" << endl;
    cin >> x;
    indice = (int) (-1);
    i = 0;
    c = 0;
    x = 0;
    while (i <= n - 1 && indice == -1) {
        c = c + 1;
        if (numeri[i] == x) {
            indice = i;
        }
        i = i + 1;
    }
    if (indice == -1) {
        cout << "non è stato trovato nessun numero" << endl;
    } else {
        cout << " il numero è stato trovato nella cella" << indice << "sono stati fatti" << c << "controlli" << endl;
    }
    int inizio, fine, medio;

    indice = (int) (-1);
    inizio = 0;
    fine = n - 1;
    while (indice == -1 && inizio <= fine) {
        medio = (int) (inzio + (double) (fine - inizio) / 2);
        if (numeri[medio] == x) {
            indice = medio;
        } else {
            if (numeri[medio] > x) {
                fine = medio - 1;
            } else {
                inizio = medio + 1;
            }
        }
        c = c + 1;
    }
    cout << " il valore è stato trovato nella cella" << indice << " in" << c << "tentativi" << endl;
    
}

