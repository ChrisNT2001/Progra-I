/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
 

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define tam 20
void datosPersonales(int,char [tam][tam],char [tam][tam],char [tam][tam],char [tam][tam],char [tam][tam],int [tam],int [tam],float [tam],float [tam]);
void calculoimc(int,float [tam],float [tam]);
void emergencia(int,char [tam][tam],char [tam][tam],char [tam][tam]);
void consulta(int,char [tam][tam],char [tam][tam]);
void signosVitales(int,int [tam],int [tam],float [tam]);
void exclinico(int,char [tam][tam],char [tam][tam],int [tam]);
void complementario(int,char [tam][tam],char [tam][tam],char [tam][tam],int [tam]);
void altamedica(int,int [tam]);
void datosPersonalesC(int,char [tam][tam],char [tam][tam],char [tam][tam],char [tam][tam],char [tam][tam],int [tam],int [tam],float [tam],float [tam]);
void emergenciaC(int,char [tam][tam],char [tam][tam],char [tam][tam]);
void consultaC(int,char [tam][tam],char [tam][tam]);
void signosVitalesC(int,int [tam],int [tam],float [tam]);
void exclinicoC(int,char [tam][tam],char [tam][tam],int [tam]);
void complementarioC(int,char [tam][tam],char [tam][tam],char [tam][tam],int [tam]);
void altamedicaC(int,int [tam]);

int main()
{
    int clave,n,i=1;
    char usuario[15],nombre[i][60],genero[i][20],direccion[i][40],cedula[i][10],num_telefono[i][15],nombre_emergencia[i][60],parentesco[i][20],num_tel_emergencia[i][15],consulta[50][i],sintomas[40][i],sintoma[30][i],antecedentes[50][i],evolucion[50][i],prescripcion[50][i],medicacion[40][i];
    int op[i],datos[i],edad[i],estado_civil[i],presion_art[i],frecuencia_cardiaca[i],puls_cardiaco[i],cirugia[i],alta[i];
    float peso[i],estatura[i],temperatura[i];
    do
    {
        printf("Ficha Médica para pacientes.\n");
        printf("Ingrese el usuario: ");
        getchar();
        gets(usuario);
        printf("Ingrese la clave: ");
        scanf("%d",&clave);
        if(clave==1234)
        {
            printf("¿Cuantos pacientes va a registrar?\n");
            scanf("%d",&n);
            while(n<0)
            {
                printf("Número no válido.\nIngrese un número mayor a 0.\n");
                printf("¿Cuantos pacientes va a registrar?\n");
                scanf("%d",&n);
            }
            while(n>=i)
            {
                printf("1. Ingrese datos personales del paciente\n2. Eliminación de datos\n3. Modificación de datos\n4. Consultar datos\n5. Salir\n");
                scanf("%d",&op[i]);
                while(op[i]<0 || op[i]>5)
                {
                    printf("Ingrese un número entre 1 y 5.\n");
                    printf("1. Ingrese datos personales del paciente\n2. Eliminación de datos\n3. Modificación de datos\n4. Consultar datos\n5. Salir\n");
                    scanf("%d",&op[i]);
                }
                switch(op[i])
                {
                    case 1:
                    {
                        datos[i]=0;
                        while(datos[i]!=8);
                        {
                            printf("Paciente %d\n",i);
                            printf("Ingreso de Datos del paciente.\n");
                            printf("1. Datos Personales del paciente.\n2. En caso de Emergencia\n3. Consulta\n4. Signos Vitales\n5. Exámen Clínico\n6. Exámenes Complementarios\n7. Alta Médica.\n8.Siguiente paciente o salida de este menú.\n");
                            scanf("%d",&datos[i]);
                            while(datos[i]<0 || datos[i]>=8)
                            {
                                printf("Opción no válida.\nIngrese un número entre 1 y 7.\n");
                                printf("Ingreso de Datos del paciente.\n");
                                printf("1. Datos Personales del paciente.\n2. En caso de Emergencia\n3. Consulta\n4. Signos Vitales\n5. Exámen Clínico\n6. Exámenes Complementarios\n7. Alta Médica.\n8.Siguiente paciente o salida de este menú.\n");
                                printf("Ingrese la opción: ");
                                scanf("%d",&datos[i]);
                            }
                            switch(datos[i])
                            {
                                case 1:
                                {
                                    datospersonales(i,nombre,genero,direccion,cedula,num_telefono,edad,estado_civil,peso,estatura);
                                }
                                break;
                                case 2:
                                {
                                    emergencia(i,nombre_emergencia,parentesco,num_tel_emergencia);
                                }
                                break;
                                case 3:
                                {
                                    consulta(i,consulta,sintomas);
                                }
                                break;
                                case 4:
                                {
                                    signosVitales(i,presion_art,frecuencia_cardiaca,temperatura);
                                }
                                break;
                                case 5:
                                {
                                    exclinico(i,sintoma,antecedentes,puls_cardiaco);
                                }
                                break;
                                case 6:
                                {
                                    complementario(i,evolucion,prescripcion,medicacion,cirugia);
                                }
                                break;
                                case 7:
                                {
                                    altamedica(i,alta);
                                }
                                default:
                                {
                                    printf("Opción no válida.\n");
                                }
                            }
                        }
                    }
                    break;
                    case 2:
                    {
                        //Eliminación de datos
                    }
                    break;
                    case 3:
                    {
                        //Modificación de datos
                    }
                    break;
                    case 4:
                    {
                        printf("Consulta de Datos del paciente.\n");
                        printf("Número de Ficha médica: ");
                        scanf("%d",&i);
                        printf("1. Datos Personales del paciente.\n2. En caso de Emergencia\n3. Consulta\n4. Signos Vitales\n5. Exámen Clínico\n6. Exámenes Complementarios\n7. Alta Médica.\n8.Siguiente paciente o salida de este menú.\n");
                        printf("Ingrese la opción: ");
                        scanf("%d",datos[i]);
                        while(datos[i]<0 || datos[i]>=9)
                        {
                            printf("Ingrese un número entero entre 1 y 8");
                            printf("1. Datos Personales del paciente.\n2. En caso de Emergencia\n3. Consulta\n4. Signos Vitales\n5. Exámen Clínico\n6. Exámenes Complementarios\n7. Alta Médica.\n8.Siguiente paciente o salida de este menú.\n");
                            printf("Ingrese la opción: ");
                            scanf("%d",datos[i]);
                        }
                        switch(datos[i])
                        {
                            case 1:
                            {
                                datosPersonalesC(i,nombre,genero,direccion,cedula,num_telefono,edad,estado_civil,peso,estatura);
                            }
                            break;
                            case 2:
                            {
                                emergenciaC(i,nombre_emergencia,parentesco,num_tel_emergencia);
                            }
                            break;
                            case 3:
                            {
                                consultaC(i,consulta,sintomas);
                            }
                            break;
                            case 4:
                            {
                                signosVitalesC(i,presion_art,frecuencia_cardiaca,temperatura);
                            }
                            break;
                            case 5:
                            {
                                exclinicoC(i,sintoma,antecedentes,puls_cardiaco);
                            }
                            break;
                            case 6:
                            {
                                complementarioC(i,evolucion,prescripcion,medicacion,cirugia);
                            }
                            break;
                            case 7:
                            {
                                altamedicaC(i,alta);
                            }
                            default:
                            {
                                printf("Opción no válida.\n");
                            }
                        }
                    }
                    break;
                    case 5:
                    {
                        exit(0);
                    }
                    break;
                    default:
                    {
                        printf("Opción no válida.\nEscoja un número entre 1 y 5\n");
                    }
                }
                i++;
            }
        }
        else
        {
            printf("Contraseña incorrecta,\nPruebe de nuevo.\n");
        }
        
    }while(op[i]!=5);
}

void datosPersonales(int i,char nombre[i][60],char genero[i][20],char direccion[i][40],char cedula[i][10],char num_telefono[i][15],int edad[i],int estado_civil[i],float peso[i],float estatura[i])
{
    printf("-------------------------------------------\n");
    printf("Datos Presonales.\n");
    printf("-------------------------------------------\n");
    printf("Ingrese el nombre del paciente: ");
    getchar();
    gets(nombre[i]);
    printf("Ingrese la cédula: ");
    getchar();
    gets(cedula[i]);
    printf("Ingrese la edad: ");
    scanf("%d",&edad[i]);
    while(edad[i]<0 || edad[i]>130);
    {
        printf("Ingrese un número entre 0 y 130.\n");
        printf("Ingrese la edad: ");
        scanf("%d",&edad[i]);
    }
    printf("Selecione el estado civil del paciente: \n");
    printf("1. Soltero/a\n2. Casado/a\n3. Viudo/a\n4. Unión libre\n5. Divorciado\n");
    scanf("%d",&estado_civil[i]);
    while(estado_civil[i]<0 || estado_civil[i]>5)
    {
        printf("Ingrese un número entre 1 y 5.\n");
        printf("Selecione el estado civil del paciente: \n");
        printf("1. Soltero/a\n2. Casado/a\n3. Viudo/a\n4. Unión libre\n5. Divorciado\n");
        scanf("%d",&estado_civil[i]);
    }
    switch(estado_civil[i])
    {
        case 1:
            printf("Soltero\n");
        break;
        case 2:
            printf("Casado.\n");
        break;
        case 3:
            printf("Viudo.\n");
        break;
        case 4:
            printf("Unión libre.\n");
        break;
        case 5:
            printf("Divorciado.\n");
        break;
    }
    printf("Ingrese el género del paciente: ");
    getchar();
    gets(genero[i]);
    printf("Ingrese  el peso del paciente(kg): ");
    scanf("%f",&peso[i]);
    while(peso[i]<2)
    {
        printf("Ingrese un número mayor a 2.\n");
        printf("Ingrese  el peso del paciente(kg): ");
        scanf("%f",&peso[i]);
    }
    printf("Ingrese la estatura(m): ");
    scanf("%f",&estatura[i]);
    while(estatura[i]<0)
    {
        printf("Ingrese un número mayor a 0.\n");
        printf("Ingrese la estatura(m): ");
        scanf("%f",&estatura[i]);
    }
    calculoimc(i,peso,estatura);
    printf("Ingrese el número de teléfono del paciente: ");
    getchar();
    gets(num_telefono[i]);
    printf("Ingrese la dirección: ");
    getchar();
    gets(direccion[i]);
    printf("********************************************\n");
}

void emergencia(int i,char nombre_emergencia[i][60],char parentesco[i][20],char num_tel_emergencia[i][15])
{
    printf("-------------------------------------------\n");
    printf("\nEn caso de Emergencia\n");
    printf("-------------------------------------------\n");
    printf("Nombre: ");
    getchar();
    gets(nombre_emergencia[i]);
    printf("Parentesco: ");
    getchar();
    gets(parentesco[i]);
    printf("Número de teléfono: ");
    getchar();
    gets(num_tel_emergencia[i]);
    printf("********************************************\n");
}
void consulta(int i,char consulta[50][i],char sintomas[40][i])
{
    printf("-------------------------------------------\n");
    printf("Consulta.\n");
    printf("-------------------------------------------\n");
    printf("Motivo de la consulta: \n");
    getchar();
    gets(consulta[i]);
    printf("Evolución de enfermedad\n");
    printf("Detalle los síntomas: \n");
    getchar();
    gets(sintomas[i]);
    printf("********************************************\n");
}
void signosVitales(int i,int presion_art[i],int frecuencia_cardiaca[i],float temperatura[i])
{
    printf("-------------------------------------------\n");
    printf("Signos vitales del paciente.\n");
    printf("-------------------------------------------\n");
    printf("Presión arterial(mMg): ");
    scanf("%d",&presion_art[i]);
    while(presion_art[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("Presión arterial(mMg): ");
        scanf("%d",&presion_art[i]);
    }
    printf("Frecuencia cardiaca: ");
    scanf("%d",&frecuencia_cardiaca[i]);
    while(frecuencia_cardiaca[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("Frecuencia cardiaca: ");
        scanf("%d",&frecuencia_cardiaca[i]);
    }
    if(frecuencia_cardiaca[i]>0)
    {
        printf("Bradicárdico.\n");
    }
    else if(frecuencia_cardiaca[i]>=60)
    {
        printf("Normal.\n");
    }
    else if(frecuencia_cardiaca[i]>=100)
    {
        printf("Taquicárdico.\n");
    }
    printf("Temperatura(C°): ");
    scanf("%f",&temperatura[i]);
    while(temperatura[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("Temperatura(C°): ");
        scanf("%f",&temperatura[i]);
    }
    if(temperatura[i]>0 && temperatura[i]<=34.99)
    {
        printf("Hipotermia.\n");
    }
    else if(temperatura[i]>=35 && temperatura[i]<=38.4)
    {
        printf("Normal.\n");
    }
    else if(temperatura[i]>=38.5 && temperatura[i]<=39.99)
    {
        printf("Fiebre.\n");
    }
    else if(temperatura[i]>=40)
    {
        printf("Hipertermia.\n");
    }
    printf("********************************************\n");
}
void exclinico(int i,char sintoma[30][i],char antecedentes[50][i],int puls_cardiaco[i])
{
    printf("-------------------------------------------\n");
    printf("Exámen clínico del paciente\n");
    printf("-------------------------------------------\n");
    printf("Sintomatología: ");
    getchar();
    gets(sintoma[i]);
    printf("Pulso cardiaco: ");
    scanf("%d",&puls_cardiaco[i]);
    while(puls_cardiaco[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("Pulso cardiaco: ");
        scanf("%d",&puls_cardiaco[i]);
    }
    if(puls_cardiaco[i]>=20 && puls_cardiaco[i]<=40)
    {
        printf("Pulso débil.\n");
    }
    else if(puls_cardiaco[i]>=40 && puls_cardiaco[i]<=99)
    {
        printf("Pulso normal\n");
    }
    else if(puls_cardiaco[i]>=100)
    {
        printf("Arritmia\n");
    }
    printf("Antecedentes: ");
    getchar();
    gets(antecedentes[i]);
    printf("********************************************\n");
}
void complementario(int i,char evolucion[50][i],char prescripcion[50][i],char medicacion[40][i],int cirugia[i])
{
    printf("-------------------------------------------\n");
    printf("Exámenes complementarios del paciente.\n");
    printf("-------------------------------------------\n");
    printf("Evaluación para la cirugía del paciente: \n");
    printf("¿Necesita cirugía?\n1.Si\n2.No\n");
    scanf("%d",&cirugia[i]);
    while(cirugia[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("¿Necesita cirugía?\n1.Si\n2.No\n");
        scanf("%d",&cirugia[i]);
    }
    if(cirugia[i]==1)
    {
        printf("Medicamentos preoperatorios: ");
        getchar();
        gets(medicacion[i]);
    }
    printf("Evolución del paciente: ");
    getchar();
    gets(evolucion[i]);
    printf("Prescripciones farmatológicas: ");
    getchar();
    gets(prescripcion[i]);
    printf("********************************************\n");
}
void altamedica(int i,int alta[i])
{
    printf("-------------------------------------------\n");
    printf("Alta médica\n");
    printf("-------------------------------------------\n");
    printf("Si el paciente está listo para el alta médica:\n1.Si\n2.No\n");
    scanf("%d",&alta[i]);
    while(alta[i]<0 || alta[i]>=3)
    {
        printf("Ingrese un valor entre 1 y 2.\n");
        printf("Si el paciente está listo para el alta médica:\n1.Si\n2.No\n");
        scanf("%d",&alta[i]);
    }
    if(alta[i]==1)
    {
        printf("El paciente es dado de alta.\n");
    }
    else
    {
        printf("El paciente no es dado de alta.\nEl paciente sigue internado.\n");
    }
    printf("********************************************\n");
}

void calculoimc(int i,float peso[i], float estatura[i],float imc[i])
{
    imc[i]=peso[i]/(pow(estatura[i],2));
    printf("Su IMC es: %.2f\n",imc[i]);
    if(imc[i]<18.5)
    {
        printf("Usted tiene insuficiencia ponderal.\n");
    }
    else if(imc[i]>=18.5 && imc[i]<24.9)
    {
        printf("Usted tiene un peso normal.\n");
    }
    else if(imc[i]>=25 && imc[i]<29.9)
    {
        printf("Usted tiene preobesidad.\n");
    }
    else
    {
        printf("Usted tiene obesidad.\n");
    }
}

void datosPersonalesC(int i,char nombre[i][60],char genero[i][20],char direccion[i][40],char cedula[i][10],char num_telefono[i][15],int edad[i],int estado_civil[i],float peso[i],float estatura[i])
{
    printf("-------------------------------------------\n");
    printf("Datos Presonales.\n");
    printf("-------------------------------------------\n");
    printf("Nombre del paciente: %s",nombre[i]);
    printf("Cédula: %s",cedula[i]);
    printf("Edad: %d",edad[i]);
    printf("Estado civil del paciente: \n");
    switch(estado_civil[i])
    {
        case 1:
            printf("Soltero\n");
        break;
        case 2:
            printf("Casado.\n");
        break;
        case 3:
            printf("Viudo.\n");
        break;
        case 4:
            printf("Unión libre.\n");
        break;
        case 5:
            printf("Divorciado.\n");
        break;
    }
    printf("Género: %s",genero[i]);
    printf("Peso del paciente(kg): %2.f",peso[i]);
    printf("Estatura(m): %2.f",estatura[i]);
    imc(i,peso,estatura);
    printf("Número de teléfono del paciente: %s",num_telefono[i]);
    printf("Dirección: %s",direccion[i]);
    printf("********************************************\n");
}

void emergenciaC(int i,char nombre_emergencia[i][60],char parentesco[i][20],char num_tel_emergencia[i][15])
{
    printf("-------------------------------------------\n");
    printf("\nEn caso de Emergencia\n");
    printf("-------------------------------------------\n");
    printf("Nombre: %s",nombre_emergencia[i]);
    printf("Parentesco: %s",parentesco[i]);
    printf("Número de teléfono: %s",num_tel_emergencia[i]);
    printf("********************************************\n");
}

void consultaC(int i,char consulta[50][i],char sintomas[40][i])
{
    printf("-------------------------------------------\n");
    printf("Consulta.\n");
    printf("-------------------------------------------\n");
    printf("Motivo de la consulta: %s\n",consulta[i]);
    printf("Evolución de enfermedad\n");
    printf("Detalle los síntomas: %s\n",sintomas[i]);
    printf("********************************************\n");
}

void signosVitalesC(int i,int presion_art[i],int frecuencia_cardiaca[i],float temperatura[i])
{
    printf("-------------------------------------------\n");
    printf("Signos vitales del paciente.\n");
    printf("-------------------------------------------\n");
    printf("Presión arterial(mMg): %s",presion_art[i]);
    printf("Frecuencia cardiaca: %s",frecuencia_cardiaca[i]);
    if(frecuencia_cardiaca[i]>0)
    {
        printf("Bradicárdico.\n");
    }
    else if(frecuencia_cardiaca[i]>=60)
    {
        printf("Normal.\n");
    }
    else if(frecuencia_cardiaca[i]>=100)
    {
        printf("Taquicárdico.\n");
    }
    printf("Temperatura(C°): %s",temperatura[i]);
    if(temperatura[i]>0 && temperatura[i]<=34.99)
    {
        printf("Hipotermia.\n");
    }
    else if(temperatura[i]>=35 && temperatura[i]<=38.4)
    {
        printf("Normal.\n");
    }
    else if(temperatura[i]>=38.5 && temperatura[i]<=39.99)
    {
        printf("Fiebre.\n");
    }
    else if(temperatura[i]>=40)
    {
        printf("Hipertermia.\n");
    }
    printf("********************************************\n");
}

void exclinicoC(int i,char sintoma[30][i],char antecedentes[50][i],int puls_cardiaco[i])
{
    printf("-------------------------------------------\n");
    printf("Exámen clínico del paciente\n");
    printf("-------------------------------------------\n");
    printf("Sintomatología: %s",sintoma[i]);
    printf("Pulso cardiaco: %d",puls_cardiaco[i]);
    while(puls_cardiaco[i]<0)
    {
        printf("Ingrese un valor mayor a 0.\n");
        printf("Pulso cardiaco: ");
        scanf("%d",&puls_cardiaco[i]);
    }
    if(puls_cardiaco[i]>=20 && puls_cardiaco[i]<=40)
    {
        printf("Pulso débil.\n");
    }
    else if(puls_cardiaco[i]>=40 && puls_cardiaco[i]<=99)
    {
        printf("Pulso normal\n");
    }
    else if(puls_cardiaco[i]>=100)
    {
        printf("Arritmia\n");
    }
    printf("Antecedentes: %s",antecedentes[i]);
    printf("********************************************\n");
}

void complementarioC(int i,char evolucion[50][i],char prescripcion[50][i],char medicacion[40][i],int cirugia[i])
{
    printf("-------------------------------------------\n");
    printf("Exámenes complementarios del paciente.\n");
    printf("-------------------------------------------\n");
    printf("Evaluación para la cirugía del paciente: \n");
    printf("¿Necesita cirugía?\n1.Si\n2.No\n%d\n",cirugia[i]);
    if(cirugia[i]==1)
    {
        printf("Medicamentos preoperatorios: %s",medicacion[i]);
    }
    printf("Evolución del paciente: %s",evolucion[i]);
    printf("Prescripciones farmatológicas: %s",prescripcion[i]);
    printf("********************************************\n");
}

void altamedicaC(int i,int alta[i])
{
    printf("-------------------------------------------\n");
    printf("Alta médica\n");
    printf("-------------------------------------------\n");
    printf("Si el paciente está listo para el alta médica:\n1.Si\n2.No\n%d",alta[i]);
    if(alta[i]==1)
    {
        printf("El paciente es dado de alta.\n");
    }
    else
    {
        printf("El paciente no es dado de alta.\nEl paciente sigue internado.\n");
    }
    printf("********************************************\n");
}

