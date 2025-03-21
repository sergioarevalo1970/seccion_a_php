#include <stdio.h>

// Tasas de conversión (modificables según valores actuales)
#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.12
#define USD_TO_GTQ 7.7
#define USD_TO_EUR 0.92
#define EUR_TO_GTQ 8.5
#define EUR_TO_USD 1.09

void convertir_moneda(float cantidad, int opcion) {
    float resultado;
    switch (opcion) {
        case 1: // GTQ a USD
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
            break;
        case 2: // GTQ a EUR
            resultado = cantidad * GTQ_TO_EUR;
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        case 3: // USD a GTQ
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4: // USD a EUR
            resultado = cantidad * USD_TO_EUR;
            printf("%.2f Dólares = %.2f Euros\n", cantidad, resultado);
            break;
        case 5: // EUR a GTQ
            resultado = cantidad * EUR_TO_GTQ;
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 6: // EUR a USD
            resultado = cantidad * EUR_TO_USD;
            printf("%.2f Euros = %.2f Dólares\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;
    char repetir;
    
    do {
        printf("Conversor de Monedas\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Dólares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dólares\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        
        printf("Ingrese la cantidad: ");
        scanf("%f", &cantidad);
        
        convertir_moneda(cantidad, opcion);
        
        printf("¿Desea hacer otro cálculo? (s/n): ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
    
    return 0;
}

