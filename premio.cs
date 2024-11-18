using System;

class Program
{
    static char VerificaPremio(int somaTotal)
    {
        if (somaTotal >= 150) return 'B';
        if (somaTotal >= 120) return 'D';
        if (somaTotal >= 100) return 'P';
        return 'N';
    }

    static void Main(string[] args)
    {
        // Leitura das entradas
        int numPao = int.Parse(Console.ReadLine());
        int numDoce = int.Parse(Console.ReadLine());
        int numBolo = int.Parse(Console.ReadLine());

        // Cálculo da soma total
        int somaTotal = numPao * 1 + numDoce * 2 + numBolo * 3;

        // Exibição do prêmio
        Console.WriteLine(VerificaPremio(somaTotal));
    }
}
