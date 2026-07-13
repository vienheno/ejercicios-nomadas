//Dado un array de números, utiliza forEach para crear un nuevo array que contenga los cuadrados de los números del array original.
const numeros = [12, 13, 5, 9, 10]
const numerosCuadrados = []
numeros.forEach((numero, index) => {
    numerosCuadrados.push(numero**2)
})
console.log(numeros)
console.log(numerosCuadrados)