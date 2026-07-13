//Crea un programa que cuente cuántas veces aparece una letra específica en una frase.
function contarLetra (frase, letra) {
    let contar = 0
    for (let letraFrase of frase) {
        letraFrase = letraFrase.toLowerCase()
        if (letraFrase == letra) {
            contar++
        }
    }
    alert('La frase ' + frase + ' tiene la letra "' +letra+ '" '+ contar + ' veces')
}
let frase = 'Programacion en Nomadas'
let letra = 'p'
contarLetra(frase, letra)