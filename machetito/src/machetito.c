fflush(stdin);
setbuf(stdout,NULL);



//maximo y minimo mas corto
		if(importe<importeMinimo || banderaImporte==0)//minimo
		{
			importeMinimo = importe;
			banderaImporte = 1;
		}

		if(importe>importeMaximo || banderaImporte==0)//maximo
				{
					importeMaximo = importe;
					banderaImporte = 1;
				}
// validacion
 do{
    variable = prompt(" ingrese ");
    variable = variable.toLowerCase();
    }while(variable  != "x" && variable != "xx" && variable != "x" );

    do{
    variable = prompt("ingrese ");
    variable = parseInt(variable);
    }while(isNaN(variable) || variable < 1 || variable > 8);

// for
    for (i = 0 ; i < 22;  i++){

	}


// for numero primo y no primo------- un numero par al dividir por 2 da 0,
//asi que se puede usar esto para los pares e impares

	for(i = 2; i < numero;i++)
	{
		if(numero % i == 0){
			alert("No es primo");
			bandera = 1;
			break;
		}
	}
	if(bandera == 0){
		alert("Es primo");
	}

// numero maximo y minimo ingresado  o tambien solo maximo y minimo

		if(banderaDelPrimero ==  0){
			numeroMinimo = numeroIngresado;
			numeroMaximo = numeroIngresado;
			banderaDelPrimero = 1;
		}
		else{
			if(numeroIngresado < numeroMinimo){
				numeroMinimo = numeroIngresado;

			}if(numeroIngresado > numeroMaximo){
				numeroMaximo = numeroIngresado;
			}
		}


// SWitch
	switch(X){
		case"X":
			porcentaje = -20;
		break;
		case "X":
		case "X":
			porcentaje = 10;
		break;
		case"MX":
			porcentaje = 20;
		break;
		default:
			mensaje = "";
		break;

	}


//descuentos

function mostrar()
{
	let tipoProducto;
	let cantidadBolsas;
	let PrecioPorBolsa;
	let respuesta;
	let descuento;
	let precioTotal;
	let importeSinDescuento;
	let importeConDescuento;
	let acumuladorPrecioTotal;
	let banderaCantidadDebolsas;
	let tipoMayorCantidadBolsas;
	let cantidadDeBolsasMayor;
	let tipoMasCaro;
	let precioTipoMasCaro;
	let banderaTipoCaro;
	let acumuladorDeBolsas;

	acumuladorDeBolsas = 0;
	banderaTipoCaro = 0;
	banderaCantidadDebolsas = 0;
	acumuladorPrecioTotal = 0;
	respuesta = "si";

	while(respuesta == "si")
	{
		tipoProducto = prompt("Ingrese el tipo de Producto");
		tipoProducto = tipoProducto.toLowerCase();
		while(tipoProducto != "cal" && tipoProducto != "arena" && tipoProducto != "cemento")
		{
			tipoProducto = prompt("Error. Ingrese su tipo de Producto. arena, cal o cemento");
			tipoProducto = tipoProducto.toLowerCase();
		}

		cantidadBolsas = prompt("Ingrese cantidad de bolsas");
		cantidadBolsas = parseInt(cantidadBolsas);
		while(isNaN(cantidadBolsas))
		{
			cantidadBolsas = prompt("Error. Ingrese cantidad de bolsas");
			cantidadBolsas = parseInt(cantidadBolsas);
		}

		PrecioPorBolsa = prompt("Ingrese el Precio Por Bolsa");
		PrecioPorBolsa = parseInt(PrecioPorBolsa);
		while(isNaN(PrecioPorBolsa) || PrecioPorBolsa < 0)
		{
			PrecioPorBolsa = prompt("Error. Ingrese un Precio Por Bolsa mayor a cero");
			PrecioPorBolsa = parseInt(PrecioPorBolsa);
		}

		precioTotal = cantidadBolsas * PrecioPorBolsa;
		acumuladorPrecioTotal = acumuladorPrecioTotal + precioTotal;
		acumuladorDeBolsas = acumuladorDeBolsas + cantidadBolsas;


		if(cantidadBolsas > 30)
		{
			descuento = 0.25;
		}
		else
		{
			if(cantidadBolsas > 10)
			{
				descuento = 0.15;
			}
		}
		if(banderaCantidadDebolsas == 0)
		{
			tipoMayorCantidadBolsas = tipoProducto;
			cantidadDeBolsasMayor = cantidadBolsas;
			banderaCantidadDebolsas = 1;
		}
		else
		{
			if(cantidadBolsas > cantidadDeBolsasMayor)
			{
				tipoMayorCantidadBolsas = tipoProducto;
				cantidadDeBolsasMayor = cantidadBolsas;
			}
		}
		if(banderaTipoCaro == 0)
		{
			tipoMasCaro = tipoProducto;
			precioTipoMasCaro = PrecioPorBolsa;
			banderaTipoCaro = 1;
		}
		else
		{
			if(PrecioPorBolsa > precioTipoMasCaro)
			{
				tipoMasCaro = tipoProducto;
				precioTipoMasCaro = PrecioPorBolsa;
			}
		}

		respuesta = prompt("desea seguir ingresando productos? [si/no]");
		respuesta = respuesta.toLowerCase();

	}

	importeSinDescuento = acumuladorPrecioTotal;
	importeConDescuento = acumuladorPrecioTotal - (acumuladorPrecioTotal * descuento);

	document.write("<br> El importe sin descuento es " + importeSinDescuento);

	if(acumuladorDeBolsas > 10)
	{
		document.write("<br> El importe con descuento es " + importeConDescuento);
	}
	document.write("<br> El tipo con mas cantidad de bolsas es " + tipoMayorCantidadBolsas);
	document.write("<br> El tipo mas caro es " + tipoMasCaro);


}

//numeros primos desde un numero hasta otro

function NumerosPrimos()
{
    let numero;
    let i;
    let j;
    let primos;
    let cont;
    primos = 0
    numero = parseInt(document.getElementById("txtIdNumero").value);
    for(j = 1; j <= numero; j++)
    {
        cont = 0;
        for(i = 1; i <= j; i++)
        {
            if(j % i == 0)
            {
                cont++;
            }
        }
        if(cont == 2)
        {
            primos++
        }
    }
    document.write("la cantidad de números Primos es: " + primos);
}
