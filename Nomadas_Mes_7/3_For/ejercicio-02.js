//Escribe un programa que calcule la suma de todos los números del 1 al N, donde N es un número ingresado por el usuario.
function sumaNumeros (cantNumeros) {
    
    
    let sumar = 0
    for (let i = 1; i <= cantNumeros; i++) {
        sumar = sumar + i
    }
    alert('La suma de los ' + cantNumeros + ' primeros números es: ' + sumar)
}
let cantNumeros
do {
    cantNumeros = prompt('Cuántos números consecutivos desea sumar: ')
    if (cantNumeros < 1) {
        alert('Ingrese un número mayor a 0')
    }
} while (cantNumeros < 1)
sumaNumeros(cantNumeros)