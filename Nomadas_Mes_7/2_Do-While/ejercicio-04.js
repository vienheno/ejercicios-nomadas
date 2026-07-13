//Pide al usuario ingresar números hasta que escriba 0. Luego, calcula el promedio de los números ingresados (excluyendo el 0).
function promedioNumeros () {
    let numero, suma = 0, contar = 0, promedio
    do {
        numero = parseInt(prompt('Ingrese un número: '))
        if (numero != 0) {
            alert('Siga ingresando otro número.')
            suma = suma + numero
            contar++
        }  
    } while (numero != 0)
    promedio = suma/contar
    alert("El promedio de los numeros ingresados es " + promedio)
}
promedioNumeros()