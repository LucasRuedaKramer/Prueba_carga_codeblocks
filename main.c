/* Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir

Aclaraciones del funcionamiento:

*/


    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>

int menu();
int aerolinea();
int medioDePago();
//int tomaDatos(int* precio);
void confirmar(char* x);
void informarNoEsNumero();

void main()
{
    char salir = 'n';
    float precioLatam;
    float precioA;
    float km;
    float descuentoA;
    float descuentoL;
    float cargoA;
    float cargoL;
    float cotizacionA;
    float cotizacionL;
    precioA = 0;
    precioLatam = 0;

    do
    {
        switch(menu())
        {
        case 1:
            printf("Ya podes ingresar los Km\n");
            fflush(stdin);
            scanf("%f", &km);
            printf("Los km son: %.2f\n" , km);
            break;
        case 2:
            switch (aerolinea())
            {
            case 1:
                printf("Ingrese el precio: ");
                fflush(stdin);
                scanf("%f", &precioLatam);
                printf("El precio es: %.2f\n" , precioLatam);
                break;
            case 2:
                printf("Ingrese el precio: ");
                fflush(stdin);
                scanf("%f", &precioA);
                printf("El precio es: %.2f\n" , precioA);
                break;
            case 3:
                confirmar(&salir);
                break;
            case 4:
                informarNoEsNumero();
                break;
            default:
            printf("Opcion Invalida!!!");
            }
            break;
        case 3:
            printf("Los km son de : %.2f\n" , 7090.00);
            printf("El precio de Latam es : %.2f\n" , 159339.00);
            printf("El precio de Latam con debito es : %.2f\n" , 159339.00 * 7090.00);
            printf("El precio de Latam con credito es : %.2f\n" , 159339.00 * 7090.00 * 1.25);
            printf("El precio de Latam con BTC es : %.2f\n" , 159339.00 * 7090.00 * 4606954.55);
            printf("El precio de Aerolineas es : %.2f\n" , 162965.00);
            printf("El precio de Aerolineas con debito es : %.2f\n" , 162965.00 * 7090.00 * .9);
            printf("El precio de Aerolineas con credito es : %.2f\n" , 162965.00 *7090.00 * 1.25);
            printf("El precio de Aerolineas con BTC es : %.2f\n" , 162965.00 * 7090.00 * 4606954.55);
            break;
        case 4:
            confirmar(&salir);
            break;
        case 5:
            informarNoEsNumero();
            break;
        default:
            printf("Opcion Invalida!!!");

        }
        getch();
        /*if(aerolinea == 1)
        {
            printf("El precio acumulado de latam es: \n", acumuladorPrecio);
        }
        else
        {
            printf("El precio acumulado de Aerolinea Argentina es: \n", &acumuladorPrecio);
        }*/
    }
    while(salir != 's');
    //fflush(stdin);

    printf("Los km son de : %.2f\n" , km);

    if(precioLatam > 0)
    {
    printf("El precio de Latam es : %.2f\n" , precioLatam);
    printf("El precio de Latam con debito es : %.2f\n" , precioLatam * km);
    printf("El precio de Latam con credito es : %.2f\n" , precioLatam * km * 1.25);
    printf("El precio de Latam con BTC es : %.2f\n" , precioLatam * km * 4606954.55);
    }

    if(precioA > 0)
    {
    printf("El precio de Aerolineas es : %.2f\n" , precioA);
    printf("El precio de Aerolineas con debito es : %.2f\n" , precioA * km * .9);
    printf("El precio de Aerolineas con credito es : %.2f\n" , precioA *km * 1.25);
    printf("El precio de Aerolineas con BTC es : %.2f\n" , precioA * km * 4606954.55);
    }

    /*return 0;*/
}

int menu()
{
    int opcion;
    int cant;

    system("cls");
    printf("*** Menu de Opciones ***\n\n");
    printf("1- Ingrese Km\n");
    printf("2- Ingrese la aerolinea\n");
    printf("3- carga forzada\n");
    printf("4- Salir\n");
    printf("Ingrese opcion: ");
    fflush(stdin);

    cant = scanf("%d", &opcion);

    if(cant == 0)
    {
        opcion = 5;
    }

    return opcion;
}

int aerolinea()
{
    int opcion;
    int cant;

    system("cls");
    printf("*** Menu de Opciones de Aerolinea ***\n\n");
    printf("1- Latam\n");
    printf("2- Aerolineas Argentina\n");
    printf("3- Salir\n");
    printf("Ingrese Aerloinea: ");
    fflush(stdin);

    cant = scanf("%d", &opcion);

    if(cant == 0)
    {
        opcion = 4;
    }

    return opcion;
}

int medioDePago()
{
    int opcion;
    int cant;

    system("cls");
    printf("*** Menu de Opciones de Aerolinea ***\n\n");
    printf("1- Debito\n");
    printf("2- Credito\n");
    printf("3- BTC\n");
    printf("4- Salir\n");
    printf("Ingrese Aerloinea: ");
    fflush(stdin);

    cant = scanf("%d", &opcion);

    if(cant == 0)
    {
        opcion = 5;
    }

    return opcion;
}

/*int tomaDatos()
{
    int importe;
    int acumuladorPrecio;
    acumuladorPrecio = 0;

    printf("Ingrese el precio: ");
    fflush(stdin);
    scanf("%d", &importe);
    //acumuladorPrecio = precio++;
}*/

void confirmar(char* x)
{
    printf("Confirma salida?: ");
    fflush(stdin);
    scanf("%c", x);
}

void informarNoEsNumero()
{
    printf("Eso no es un numero\n");
}




