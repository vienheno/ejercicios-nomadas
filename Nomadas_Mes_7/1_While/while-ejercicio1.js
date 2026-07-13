//Usa un bucle while para sumar los números del 1 al 50 e imprimir el resultado final.
let limite = parseInt(prompt('Ingrese el número límite (máximo 50): '))
let suma = 0, i = 1

while (i <= limite) {
    suma = suma + i;
    console.log('paso: i = ',i,' | Suma parcial = ', suma)
    i++
}

console.log('La suma total es; ', suma)