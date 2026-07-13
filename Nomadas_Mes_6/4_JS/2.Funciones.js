//FUNCIONES DECLARADAS
saludar()

function saludar() {
    console.log('Hola')
}
saludar()

//FUNCIONES EXPRESADAS
var suma = function() {
    let a = 10, b = 12
    suma = a + b
    return suma
}
console.log(suma())
