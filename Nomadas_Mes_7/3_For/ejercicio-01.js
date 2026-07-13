//Crea un programa que imprima la tabla de multiplicar del 5 (del 1 al 10).
function tablaDel5 () {
    let numero = Number(prompt('Ingrese un numero para su tabla: '))
    for (let i = 1 ; i <= 12 ; i++) {
        console.log(i, 'x', numero, ' = ', i*numero)
    }
}
tablaDel5()