//Pide números al usuario hasta que ingrese un número negativo. Al final, muestra la suma de todos los números ingresados.
function sumarNumeros () {
    let numero, suma = 0
    do {
        numero = parseInt(prompt('Ingrese un número positivo: '))
        if (numero > 0) {
            alert('Siga ingresando otro número.')
            suma = suma + numero
        }  
    } while (numero > 0)
    
    alert("Ingresaste un número negativo, la suma es " + suma)
}
sumarNumeros()