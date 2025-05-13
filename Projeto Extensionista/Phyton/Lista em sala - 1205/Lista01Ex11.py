#Calculo de dias sem acidentes na fabrica

print("Insira o total de dias sem acidentes: ")
total = int(input())

anos = total // 365
resto = total % 365
meses = resto // 30
dias = resto % 30

print(f"Tempo sem acidentes: {anos} anos, {meses} meses, {dias} dias")




