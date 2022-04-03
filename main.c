#include "header.h"

int main()
{
    Fecha fecha, fecha2;
    int dias;
    printf("Ingrese la fecha desde (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
    printf("Ingrese la fecha hasta (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &fecha2.dia, &fecha2.mes, &fecha2.anio);

    if(esFechaValida(fecha) && esFechaValida(fecha2))
    {
        if(fecha.dia <= fecha2.dia && fecha.mes <= fecha2.mes && fecha.anio <= fecha2.anio)
        {
            dias = diasEntreDosFechas(fecha, fecha2);
            printf("La cantidad de dias entre las dos fechas es de: %d", dias);
        }else
        {
            printf("La primer fecha debe ser menor que la segunda fecha");
        }
    }else
    {
        printf("La fecha ingresada no es valida");
    }
    return 0;
}
