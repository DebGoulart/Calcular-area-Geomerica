def area_triangulo(base, altura):
    return  (base * altura) / 2

def area_circulo(raio):
    pi = 3.14

    return pi * raio ** 2

def area_losango(diagonal1, diagonal2):
    return (diagonal1 * diagonal2) / 2

def area_retangulo(largura, altura):
    return largura * altura

def area_trapezio(base1, base2, altura):
    return ((base1 + base2) * altura) / 2

def menu ():
    print("Escolha uma forma geométrica para calcular a área:")
    print("1. Triângulo")
    print("2. Círculo")
    print("3. Losango")
    print("4. Retângulo")
    print("5. Trapézio")

    opcao = int(input("Digite o número correspondente a forma geométrica desejada: "))

    if opcao == 1:
        base = float(input("Digite o valor da base do triângulo: "))
        altura = float(input("Agora digite o valor da altura do triângulo: "))  

        area = area_triangulo(base, altura)

    elif opcao == 2:
        raio = float(input("Digite o valor do raio do círculo: "))

        area = area_circulo(raio)
    
    elif opcao == 3:
        diagonal1 = float(input("Digite o valor da diagonal maior: "))
        diagonal2 = float(input("Digite o valor da diagonal menor: "))

        area = area_retangulo(diagonal1, diagonal2)

    elif opcao == 4:
        largura = float(input("Digite o valor da largura do retângulo: "))
        altura = float(input("Agora, digite o valor da altura do retângulo: "))

        area = area_retangulo(largura, altura)

    elif opcao == 5: 
        base1 = float(input("Digite o valor da base maior do trapézio: "))
        base2 = float(input("Digite o valor da base menor do trapézio: "))
        altura = float(input("Agora, digite a altura do trapézio: "))

        area = area_trapezio(base1, base2, altura)
    else:
        print("Opcão inválida. Escolha um número de 1 a 5.")

        return

    print(f"A área da forma selecionada é: {area}")

if __name__ == "__main__":
    menu()