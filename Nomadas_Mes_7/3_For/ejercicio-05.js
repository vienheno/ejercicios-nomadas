//Escribe un programa que encuentre e imprima todos los números primos entre 1 y un número NN ingresado por el usuario. Un número primo es aquel que solo es divisible entre 1 y sí mismo.
function numerosPrimos(numero) {
    let esPrimo = true
    let contar = 0
    for (let i = 1; i <= numero; i++) {
        esPrimo = true
        contar = 0
        for (let j = 1 ; j <= i ; j++) {
            if (i % j == 0) {
                contar++
            } 
            if (contar > 2) {
                esPrimo = false
                break
            }
        }
        if (esPrimo == true && i != 1) {
            console.log ('Número primo: ',i)
        }
        //console.log ('Número primo: ',i)
    }
}
let numero
do {
    numero = Number(prompt('Ingrese un número: '))
    if (numero < 2) {
        alert('Ingrese un número mayor a 1')
    }
} while (numero < 2)

numerosPrimos(numero)