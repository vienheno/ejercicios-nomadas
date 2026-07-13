/*
function calcularPrecioFinal (precioBase) {
    let IGV = precioBase*0.18
    let precioFinal = precioBase + IGV

    return {
        IGV: IGV,
        precioFinal: precioFinal
    }
}
*/

const calcularPrecioFinal = function (precioBase) {
    let IGV = precioBase*0.18
    let precioFinal = precioBase + IGV

    return {
        IGV: IGV,
        precioFinal: precioFinal
    }
};

function procesar () {
    let precioBase = parseFloat(document.getElementById("precioBase").value)
    if (isNaN(precioBase) || precioBase <= 0) {
        alert('Porfavor, ingrese un precio válido.')
        return
    }

    let resultado = calcularPrecioFinal(precioBase)

    document.getElementById('resultado').innerHTML = `
    <p>Precio Base: <span>S/. ${precioBase.toFixed(2)}</span></p>
    <p>IGV: <span>S/. ${resultado.IGV.toFixed(2)}</span></p>
    <p>Precio Final: <span>S/. ${resultado.precioFinal.toFixed(2)}</span></p>`
}