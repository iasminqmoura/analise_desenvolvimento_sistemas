#Calculo de peso ideal
#homens (72.7 * h) - 58;
#mulheres (62.1 * h) - 44,7;

print("Digite a altura (em metros): ")
h = float(input())


print("Digite o sexo (M para masculino, F para feminino): ")
sexo = input()
if sexo == 'M':
    peso_ideal = (72.7 * h) - 58
elif sexo == 'F':
    peso_ideal = (62.1 * h) - 44,7

print(f"O peso ideal ajustado é: {peso_ideal:.2f} kg")
