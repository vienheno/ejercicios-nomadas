//Pide al usuario una palabra y calcula cuántas vocales tiene.
function contarVocales () {
    let palabra = prompt('Ingrese una palabra: ')
    let contar = 0, i = 0
    palabra = palabra.toLowerCase()
    do {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' ) {
            contar++
        }
        i++
    } while (i <= palabra.length - 1);

    alert ('La palabra ' + palabra + ' tiene ' + contar + ' vocales.')
}

contarVocales()