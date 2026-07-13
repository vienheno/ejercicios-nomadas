//Crea un programa que le pida al usuario ingresar números uno por uno. El programa debe terminar cuando el usuario ingrese un número negativo. Al final, imprime cuál fue el número mayor que ingresó.
let numero = parseInt(prompt('Ingrese un número: '))
let mayor = numero
while (numero >= 0) {
    numero = parseInt(prompt('Ingrese un número: '))
    if (numero > mayor) mayor = numero
}
alert('El mayor número es: ' + mayor)