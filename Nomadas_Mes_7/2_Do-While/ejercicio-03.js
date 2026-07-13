//El programa debe generar un número aleatorio entre 1 y 10. Luego, pide al usuario que lo adivine hasta que lo haga correctamente.
function adivinarNumero () {
    //math.random() => Genera un número estre 0 y 1 (0.000... y 0.9999...)
    //Math.floor => Convierte un decimal a su maximo entero 
    let numerSecreto = Math.floor(Math.random()*10) + 1
    let numeroUsuario

    do {
        numeroUsuario = Number(prompt('Adivina el número entre 1 y 10: '))
        if (numeroUsuario < numerSecreto) {
            alert('Ingresa un número MAYOR.')
        } else if (numeroUsuario > numerSecreto){
            alert('Ingresa un número MENOR.')
        } else {
            alert('ADIVINASTE EL NÚMERO, era ' + numerSecreto)
        }
    } while (numerSecreto != numeroUsuario)
}

adivinarNumero()