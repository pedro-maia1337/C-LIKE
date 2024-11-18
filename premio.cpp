#include <iostream>

using namespace std;

char verificaPremio(int somaTotal){
    if(somaTotal >= 150) return 'B';
    if(somaTotal >= 120) return 'D';
    if(somaTotal >= 100) return 'P';
    
    return 'N';
}

int main(){
    int numPao, numDoce, numBolo, somaTotal = 0;

    cin >> numPao;
    cin >>numDoce;
    cin >> numBolo;

    somaTotal = numPao * 1 + numDoce * 2 + numBolo * 3;

    cout << verificaPremio(somaTotal);
}