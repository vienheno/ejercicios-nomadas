//Dado un array de números, crea un nuevo array que contenga solo los números pares.
function buscarPares (numeros) {
    const numerosPares = []
    for (const numero of numeros) {
        if (numero%2 === 0) {
            numerosPares.push(numero)
        }
    }
    console.log(numerosPares)
}
const numeros = [12, 47, 43, 24, 28, 40]
buscarPares(numeros)
