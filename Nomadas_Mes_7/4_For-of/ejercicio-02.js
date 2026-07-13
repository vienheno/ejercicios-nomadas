//Escribe un programa que reciba un array de palabras ycree un nuevo array con todas las palabras en mayúsculas.
function palabrasMayusculas (palabras) {
    let palabraMayus
    const palabrasEnMayus = []
    for (const palabra of palabras) {
        palabraMayus = palabra.toUpperCase()
        palabrasEnMayus.push(palabraMayus)
    }
    console.log(palabrasEnMayus)
}

const palabras = ['Tele', 'Gamer', 'Memoria']
palabrasMayusculas(palabras)