function encontrarMaximo(numeros) {
  if(numeros.length ===0) return undefined
  let numMax = numeros[0]
  
  for (let i = 1; i < numeros.length; i++) {
    if (numeros[i] > numMax) {
      numMax = numeros[i]
    }
  }
  return numMax
}
let numeros = [25, 58, 30, 15]
console.log(encontrarMaximo(numeros))