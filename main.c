#include <stdio.h>

int main() {
   
    int horasNormales, horasSuplementarias , horasExtraordinarias;
    float sueldoNormal, sueldoSuplementario, sueldoExtraordinario, sueldoTotal;
    int opcionSuplementarias, opcionExtraordinarias;

   
    printf("Ingrese el número de horas normales trabajadas: ");
    scanf("%d", &horasNormales);

    
    printf("Trabajo horas suplementarias? (1 = Sí, 2 = No): ");
    scanf("%d", &opcionSuplementarias);
    if (opcionSuplementarias == 1) {
        printf("Ingrese el número de horas suplementarias trabajadas: ");
        scanf("%d", &horasSuplementarias);
    }

  
    printf("Trabajo horas extraordinarias? (1 = Sí, 2 = No): ");
    scanf("%d", &opcionExtraordinarias);
    if (opcionExtraordinarias == 1) {
        printf("Ingrese el número de horas extraordinarias trabajadas: ");
        scanf("%d", &horasExtraordinarias);
    }

    
    sueldoNormal = horasNormales * 5; 
    sueldoSuplementario = horasSuplementarias * 7.5; 
    sueldoExtraordinario = horasExtraordinarias * 10; 
    sueldoTotal = sueldoNormal + sueldoSuplementario + sueldoExtraordinario;

   
    printf("\nSueldo por horas normales: $%.2f\n", sueldoNormal);
    printf("Sueldo por horas suplementarias: $%.2f\n", sueldoSuplementario);
    printf("Sueldo por horas extraordinarias: $%.2f\n", sueldoExtraordinario);
    printf("Sueldo total semanal: $%.2f\n", sueldoTotal);

    return 0;
}



