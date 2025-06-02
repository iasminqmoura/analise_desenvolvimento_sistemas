import math
# Entrada dos pontos
x1 = float(input("Digite o valor de x1: "))
y1 = float(input("Digite o valor de y1: "))
x2 = float(input("Digite o valor de x2: "))
y2 = float(input("Digite o valor de y2: "))

# Cálculo da distância usando a fórmula
distancia = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

# Exibição do resultado com duas casas decimais
print(f"A distância entre os dois pontos é: {distancia2:.2f}")