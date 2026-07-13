/*
Dado un objeto con números como valores, encuentra el valor máximo. 
const numeros = { 
    a: 10, 
    b: 25, 
    c: 5, 
    d: 30, 
};
*/
function maximoValor (numeros) {
    let numMax = -Infinity
    for (const variable in numeros) {
        if (numMax < numeros[variable]) {
            numMax = numeros[variable]
        }
    }
    console.log(numeros)
    console.log('El número máximo es: ', numMax)
}

const numeros = { 
    a: 10, 
    b: 55, 
    c: 45, 
    d: 30, 
}
maximoValor(numeros)