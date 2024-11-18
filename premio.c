#include <stdio.h>

char verificaPremio(int somaTotal){
    if(somaTotal >= 150) return 'B';
    if(somaTotal >= 120) return 'D';
    if(somaTotal >= 100) return 'P';
    
    return 'N';
}

int main(void){
    int numPao, numDoce, numBolo, somaTotal = 0;

    scanf("%d", &numPao);
    scanf("%d", &numDoce);
    scanf("%d", &numBolo);

    somaTotal = numPao * 1 + numDoce * 2 + numBolo * 3;

    printf("%c", verificaPremio(somaTotal));

    return 0;
}