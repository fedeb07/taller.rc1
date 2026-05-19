#include <stdio.h>

// FUNCION PARA INGRESAR NOTAS
void ingresarNotas(float notas[][3], int estudiantes);

// FUNCION PARA MOSTRAR PROMEDIO POR ESTUDIANTE
void promedioEstudiante(float notas[][3], int estudiantes);

// FUNCION PARA MOSTRAR PROMEDIO POR ASIGNATURA
void promedioAsignatura(float notas[][3], int estudiantes);


int main()
{
    int estudiantes;

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &estudiantes);

    float notas[estudiantes][3];

    return 0;
}