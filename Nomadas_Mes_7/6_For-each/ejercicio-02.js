//Dado un array de números, utiliza forEach para multiplicar cada número por 2 y luego imprimirlo.
const numeros = [12, 13, 5, 9, 10]
const numerosx2 = []
numeros.forEach((numero, index) => {
    numerosx2.push(numero*2)
})
console.log(numeros)
console.log(numerosx2)