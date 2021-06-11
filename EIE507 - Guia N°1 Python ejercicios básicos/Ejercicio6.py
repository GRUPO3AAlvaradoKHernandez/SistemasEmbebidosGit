num1 = float(input("Ingrese primer número: "))
num2 = float(input("Ingrese segundo número: "))

if num1**2 == num2:
    print("El segundo es el cuadrado exacto del primero")
if num1**2 > num2:
    print("El segundo número es menor que el cuadrado del primero")
if num1**2 < num2:
    print("El segundo número es mayor que el cuadrado del primero")