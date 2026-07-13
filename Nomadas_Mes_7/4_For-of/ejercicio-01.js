//Dado un array de números, calcula la suma total de sus elementos utilizando for...of.
function sumarNumeros (numeros) {
    let suma = 0
    for (const num of numeros) {
        suma = suma + num
    }
    alert('La suma de los numeros es: ' + suma)
}
const numeros = [10, 12, 14, 16, 18]
sumarNumeros(numeros)