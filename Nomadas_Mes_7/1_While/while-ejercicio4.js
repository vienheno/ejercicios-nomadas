//Escribe un programa que solicite una contraseña al usuario (puedes asignarla directamente en el código como "1234"). El programa debe seguir pidiendo la contraseña hasta que el usuario la introduzca correctamente.
let passCorrecta = '112358'
let pass = prompt('Ingrese la contraseña: ')
while (pass != passCorrecta) {
    alert('Contraseña Incorrecta!!')
    pass = parseInt(prompt('Ingrese la contraseña: '))
}
alert('Contrasela Correcta!!')