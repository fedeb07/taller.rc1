#include <stdio.h>

// FUNCION PARA INGRESAR NOTAS
void ingresarNotas(float notas[][3], int estudiantes);

// FUNCION PARA MOSTRAR PROMEDIO POR ESTUDIANTE
void promedioEstudiante(float notas[][3], int estudiantes);

// FUNCION PARA MOSTRAR PROMEDIO POR ASIGNATURA
void promedioAsignatura(float notas[][3], int estudiantes);

// FUNCION PARA MOSTRAR NOTA ALTA Y BAJA
void notasAltasBajas(float notas[][3], int estudiantes);

// FUNCION PARA APROBADOS Y REPROBADOS
void aprobadosReprobados(float notas[][3], int estudiantes);

int main()
{
    int estudiantes;

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &estudiantes);

    // MATRIZ PARA GUARDAR LAS NOTAS
    float notas[estudiantes][3];

    ingresarNotas(notas, estudiantes);

    printf("\n===== RESULTADOS =====\n");

    promedioEstudiante(notas, estudiantes);

    promedioAsignatura(notas, estudiantes);

    notasAltasBajas(notas, estudiantes);

    aprobadosReprobados(notas, estudiantes);

    return 0;
}

// FUNCION PARA INGRESAR NOTAS
void ingresarNotas(float notas[][3], int estudiantes)
{
    int i, j;

    for(i = 0; i < estudiantes; i++)
    {
        printf("\nEstudiante %d\n", i + 1);

        for(j = 0; j < 3; j++)
        {
            do
            {
                printf("Ingrese nota de la asignatura %d (0-10): ", j + 1);
                scanf("%f", &notas[i][j]);

                if(notas[i][j] < 0 || notas[i][j] > 10)
                {
                    printf("ERROR: Nota invalida.\n");
                }

            } while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }
}

// PROMEDIO POR ESTUDIANTE
void promedioEstudiante(float notas[][3], int estudiantes)
{
    int i, j;
    float suma, promedio;

    printf("\n--- Promedio por estudiante ---\n");

    for(i = 0; i < estudiantes; i++)
    {
        suma = 0;

        for(j = 0; j < 3; j++)
        {
            suma += notas[i][j];
        }

        promedio = suma / 3;

        printf("Estudiante %d: %.2f\n", i + 1, promedio);
    }
}

// PROMEDIO POR ASIGNATURA
void promedioAsignatura(float notas[][3], int estudiantes)
{
    int i, j;
    float suma, promedio;

    printf("\n--- Promedio por asignatura ---\n");

    for(j = 0; j < 3; j++)
    {
        suma = 0;

        for(i = 0; i < estudiantes; i++)
        {
            suma += notas[i][j];
        }

        promedio = suma / estudiantes;

        printf("Asignatura %d: %.2f\n", j + 1, promedio);
    }
}

// NOTA MAS ALTA Y BAJA POR ESTUDIANTE
void notasEstudiante(float notas[][3], int estudiantes)
{
    int i, j;
    float mayor, menor;

    printf("\n--- Nota mas alta y baja por estudiante ---\n");

    for(i = 0; i < estudiantes; i++)
    {
        mayor = notas[i][0];
        menor = notas[i][0];

        for(j = 1; j < 3; j++)
        {
            if(notas[i][j] > mayor)
            {
                mayor = notas[i][j];
            }

            if(notas[i][j] < menor)
            {
                menor = notas[i][j];
            }
        }

        printf("Estudiante %d\n", i + 1);
        printf("Nota mas alta: %.2f\n", mayor);
        printf("Nota mas baja: %.2f\n", menor);
    }
}

// NOTA ALTA Y BAJA POR ASIGNATURA
void notasAltasBajas(float notas[][3], int estudiantes)
{
    int i, j;
    float mayor, menor;

    printf("\n--- Nota mas alta y baja por asignatura ---\n");

    for(j = 0; j < 3; j++)
    {
        mayor = notas[0][j];
        menor = notas[0][j];

        for(i = 1; i < estudiantes; i++)
        {
            if(notas[i][j] > mayor)
            {
                mayor = notas[i][j];
            }

            if(notas[i][j] < menor)
            {
                menor = notas[i][j];
            }
        }

        printf("Asignatura %d\n", j + 1);
        printf("Nota mas alta: %.2f\n", mayor);
        printf("Nota mas baja: %.2f\n", menor);
    }
}

// APROBADOS Y REPROBADOS
void aprobadosReprobados(float notas[][3], int estudiantes)
{
    int i, j;
    int aprobados, reprobados;

    printf("\n--- Aprobados y reprobados ---\n");

    for(j = 0; j < 3; j++)
    {
        aprobados = 0;
        reprobados = 0;

        for(i = 0; i < estudiantes; i++)
        {
            if(notas[i][j] >= 6)
            {
                aprobados++;
            }
            else
            {
                reprobados++;
            }
        }

        printf("Asignatura %d\n", j + 1);
        printf("Aprobados: %d\n", aprobados);
        printf("Reprobados: %d\n", reprobados);
    }
}

