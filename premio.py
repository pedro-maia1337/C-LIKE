def verifica_premio(soma_total):
    if soma_total >= 150:
        return 'B'
    if soma_total >= 120:
        return 'D'
    if soma_total >= 100:
        return 'P'
    return 'N'

def main():
    
    num_pao = int(input())
    num_doce = int(input())
    num_bolo = int(input())

    
    soma_total = num_pao * 1 + num_doce * 2 + num_bolo * 3

    
    print(verifica_premio(soma_total))

if __name__ == "__main__":
    main()
