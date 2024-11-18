import java.util.Scanner;

public class premio {
    public static char verificaPremio(int somaTotal) {
        if (somaTotal >= 150) return 'B';
        if (somaTotal >= 120) return 'D';
        if (somaTotal >= 100) return 'P';
        return 'N';
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numPao, numDoce, numBolo, somaTotal;


        numPao = scanner.nextInt();
        numDoce = scanner.nextInt();
        numBolo = scanner.nextInt();


        somaTotal = numPao * 1 + numDoce * 2 + numBolo * 3;


        System.out.println(verificaPremio(somaTotal));

        scanner.close();
    }
}
