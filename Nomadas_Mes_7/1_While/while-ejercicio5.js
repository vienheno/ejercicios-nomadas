//Escribe un programa que pida al usuario un número del 1 al 10 y use un bucle while para imprimir su tabla de multiplicar (del 1 al 10).
let numero = parseInt(prompt('Ingrese un número del 1 a 10: '))
let i = 1
while(i <= 10) {
    console.log(numero,'x',i,' = ',i*numero)
    i++
}