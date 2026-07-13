//Escribe un programa que calcule el factorial de un número ingresado por el usuario. El factorial de un número nn se calcula como: n!=n×(n−1)×(n−2)×…×1n!=n×(n−1)×(n−2)×…×1.
function factorial (numero) {
    let fact = 1
    for (let i = numero; i > 0; i--) {
        fact = fact*i 
    }
    alert('El factorial del número ' + numero + ' es ' + fact)
}
let numero
do {
    numero = Number(prompt('Ingrese un número: '))
    if (numero < 1) {
        alert('Ingrese un número mayor a 0')
    }
} while (numero < 1)

factorial(numero)