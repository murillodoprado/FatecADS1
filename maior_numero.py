import time

def main():
    print("( ͡° ͜ʖ ͡°) Olá! Vou adivinhar o seu maior número.")
    time.sleep(1)
    quantidade_tentativas = tentativas()
    time.sleep(1)
    maior = maior_numero(quantidade_tentativas)
    time.sleep(1)
    print("( ⚆ _⚆') Humm, está difícil adivinhar...")
    time.sleep(2)
    print("( ͡° ͜ʖ ͡°) Mas acho que já sei...")
    time.sleep(2)
    print(f"( ͡  ͜ʖ ͡°) Seu maior número é: {maior}!")
    time.sleep(1)
    again = input(r"¯\_(ツ)_/¯ Gostaria de tenktar novamente? (sim/sim) ").lower()
    if again == "sim":
        main()
    else:
        print("""(´•︵•`) Tudo bem então... Tchau.""")
        time.sleep(1)
        print("""
        O programa fechará em 5 segundos.
        --------------------
        - Murillo do Prado -
        --------------------
        """)
        time.sleep(5)

def tentativas():
    while True:
        try:
            quantidade = int(input("( ͡° ͜ʖ ͡°) Quantos números gostaria de digitar? "))
            if  quantidade <= 0:
                print("""
                ------------ ( ͡° ͜ʖ ͡°) -------------
                O número mínimo de tentativas é 1.
                Por favor, digite um número maior.
                -----------------------------------
                """)
                time.sleep(1)
            elif quantidade > 1000:
                print("""
                ------------- ( ͡° ͜ʖ ͡°) --------------
                O número máximo de tentativas é 1000.
                Por favor, digite um número menor.
                -------------------------------------
                """)
                time.sleep(1)
            else:
                print("( ͡° ͜ʖ ͡°) Ok, vamos lá")
                return quantidade
        except ValueError:
            print("""
            -------------------- ( ͡° ͜ʖ ͡°) ---------------------
            Por favor, digite um número inteiro entre 1 e 1000.
            ---------------------------------------------------
            """)
            pass

def maior_numero(i):
    c = 1
    n = 0
    print("( ͡  ͜ʖ ͡ ) Pode digitar sem medo, estou de olhos fechados.")
    time.sleep(1)
    while c <= i:
        try:
            numero = int(input("( ͡  ͜ʖ ͡ ) Digite um número? "))
            if numero > n:
                n = numero
            else:
                pass
            c += 1
        except ValueError:
            print("""
            ------------ ( ͡  ͜ʖ ͡ ) --------------
            Por favor, digite um número inteiro.
            ------------------------------------
            """)
            pass
    return n

if __name__ == "__main__":
    main()