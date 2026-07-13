//Dado un array de nombres, utiliza forEach para crear un nuevo array con los nombres formateados en formato "Nombre Apellido" (solo con el primer nombre y apellido).
//const nombres = ['juan perez', 'ana garcia', 'carlos lopez'];
function formatearNombreCompleto (nombreCompleto) {
    const nombres = []
    const apellidos = []
    const fullName = []
    nombreCompleto.forEach((valor, index) => {
        nombres[index] = valor.split(" ")[0]
        apellidos[index] = valor.split(" ")[1]
        nombres[index] = nombres[index].charAt(0).toUpperCase() + nombres[index].slice(1)
        apellidos[index] = apellidos[index].charAt(0).toUpperCase() + apellidos[index].slice(1)
        fullName[index] = nombres[index] + ' ' + apellidos[index]
    });
    
    console.log(nombres)
    console.log(apellidos)
    console.log(fullName)   
}
nombreCompleto = ['juan perez', 'ana garcia', 'carlos lopez']
formatearNombreCompleto (nombreCompleto)