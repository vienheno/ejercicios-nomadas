//Escribe un programa que imprima todos los números pares entre 1 y20.
function numerosPares (numeroFinal) {
    for (let i = 1; i <= numeroFinal; i++) {
        if (i % 2 == 0) {
            console.log ('Número par: ',i)
        } 
    }
}
let numeroFinal
do {
    numeroFinal = Number(prompt('Ingrese el número final: '))
    if (numeroFinal < 1) {
        alert('Ingrese un número mayor a 0')
    }
} while (numeroFinal < 1)

numerosPares(numeroFinal)