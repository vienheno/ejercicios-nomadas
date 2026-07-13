//Escribe un programa que tome un número entero positivo y use un bucle while para calcular la suma de sus dígitos. Por ejemplo, si el número es 1234, la suma sería 1 + 2 + 3 + 4 = 10.
let numero = parseInt(prompt('Ingrese un número positivo: '))
while (numero <= 0) {
    alert ('Numero Incorrecto, ingrese un número positivo.')
    numero = parseInt(prompt('Ingrese un número positivo: '))
}
numeroInicial = numero
let i = 1, digito, suma = 0
while (numero > 0) {
    digito = numero % 10
    suma = suma + digito
    numero = Math.floor(numero /10)
    i++
}
alert('La suma de las cifras del numero ' + numeroInicial + 'es ' + suma)