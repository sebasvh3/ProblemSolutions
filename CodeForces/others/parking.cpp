//#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <cmath>

using namespace std;

void Pantalla_Inicio(void);

struct carro {
    char Placa[20];
    char Marca[20];
    char Color[20];
    char Fecha[20];
    char Hora [20];
    int contador;

    struct carro *sig; //PUNTERO A LA SIGUIENTE ENTRADA
    struct carro *ant; //PUNTERO AL REGISTRO ANTERIOR
};

struct carro *ppio; //PUNTERO A LA PRIMERA ENTRADA ALA LISTA
struct carro *final; //PUNTERO ALA ULTIMA ENTRADA
struct carro *buscar(char *);
void intro(void);
void buscar(void);
void listar(void);
void eliminar(struct carro **, struct carro **);
void dl_insert(struct carro *i, struct carro **ppio, struct carro **final);
void leecad(char *, char *, int); // mostrar(struct carro *);
int menu(void);
int conta = 0;

main() {
    //Pantalla_Inicio();
    system("COLOR F1");
    char opc;

    ppio = final = NULL; //INICIALIZA LOS PUNTEROS

    do {
        system("cls");

        cout << "\nPARQUEADERO DE SISTEMAS \n\n";
        cout << "- MARQUE 1 PARA REGISTRAR VEHICULO\n";
        cout << "- MARQUE 2 PARA DAR SALIDA A VEHICULO\n";
        cout << "- MARQUE 3 PARA MOSTRAR VEHICULOS\n";
        cout << "- MARQUE 4 PARA BUSCAR UN VEHICULO\n";
        cout << "- MARQUE 5 PARA GENERAR REPORTE DE VENTAS\n";
        cout << "- MARQUE 6 PARA SALIR\n\n";
        cout << "INGRESE OPCION: ";
        opc = getch();
        switch (opc) {
            case '1':
                intro(); //INTRODUCIR INFORMACION DE VEHICULO
                break;
            case '2':
                eliminar(&ppio, &final); //ELIMINA INFORMACIO DE UN VEHICULO
                break;
            case '3':
                listar(); //MOSTRAR LISTA DE VEHICULOS
                break;
            case '4':
                buscar(); //ENCONTRAR UN VEHICULO
                break;
            case '5':
                buscar(); //ENCONTRAR UN VEHICULO
                break;
            case '6':
                delete ppio;
                delete final;
                system("cls");
                cout << "EL PROGRAMA SE ESTA CERRANDO";
                Sleep(3000);
                exit(1);
                break;
        }
    } while (opc != '6');
    return 0;
}




//Introducir datos de vehiculos

void intro(void) {
    system("COLOR F1");
    system("cls");

    struct carro *info;

    for (;;) {
        info = (struct carro *) malloc(sizeof (struct carro));
        if (!info) {
            cout << endl << "no hay memoria";
            return;
        }

        cout << "Datos del carro \n";
        leecad("\nIntroduzca Placa: ", info->Placa, 20);
        if (!info->Placa[0]) break; //parar el proceso
        leecad("Introduce Marca: ", info->Marca, 20);
        leecad("Introduce Color: ", info->Color, 20);
        leecad("Introduce Fecha: ", info->Fecha, 20);
        leecad("Introduce Hora: ", info->Hora, 20);
        dl_insert(info, &ppio, &final);
    }
    //clrscr();
}

/* Esta funcion lee una cadena de longitud maxima cont
y previene el desbordamiento de la cadena. tambien
visualiza un mensaje indicativo */
void leecad(char *indic, char *s, int cont) {
    char p[255];
    do {
        printf(indic);
        fgets(p, 254, stdin);
    }    while (strlen(p) > cont);
    p[strlen(p) - 1] = 0; //Eliminar el salto de linea
    strcpy(s, p);
}


// crear una lista doblemente enlazada

void dl_insert
(
        struct carro *i, //nuevo elemento
        struct carro **ppio, //primer elemento de la lista
        struct carro **final //ultimo elemento de la lista
        ) {
    struct carro *ant, *p;
    if (*final == NULL) //primer elemento de la lista
    {
        i->sig = NULL;
        i->ant = NULL;
        *final = i;
        *ppio = i;
        return;
    }
    p = *ppio; //principio de la lista
    ant = NULL;
    while (p) {
        if (strcmp(p->Placa, i->Placa) < 0) {
            ant = p;
            p = p->sig;
        } else {
            if (p->ant) {
                p->ant->sig = i;
                i->sig = p;
                i->ant = p->ant;
                p->ant = i;
                *ppio = i;
                return;
            }
            i->sig = p; //nuevo primer elemento
            i->ant = NULL;
            p->ant = i;
            *ppio = i;
            return;
        }
    }
    ant->sig = i; //ponerlo en el final
    i->sig = NULL;
    i->ant = ant;
    *final = i;
}



//eliminar un elemento de la lista

void eliminar(struct carro **ppio, struct carro **final) {
    struct carro *info;
    char s[80];
    int tf;


    leecad("Introduce el Placa: ", s, 30);


    info = buscar(s);

C:

    cout << "Ingrese hora de salida: ";
    cin >> tf;
    int ti = atoi(info->Hora);


    if (ti >= tf)
 {
        cout << "Datos mal registrados \n";
        goto C;
    } else {
        int horaini, horafin, pago, minini, minfin, totalh, totalm, totalpesos;
        double ttotal;
        horaini = (int) (ti / 100);
        horafin = (int) (tf / 100);
        minini = ti - (horaini * 100);
        minfin = tf - (horafin * 100);

        totalh = (horafin - horaini)*60;
        totalm = minfin - minini;

        ttotal = (totalh + totalm) / 15;


        if ((totalh + totalm) % 15 == 0) {
            totalpesos = (int) (ttotal * 1500);
        } else {
            ttotal = floor(((totalh + totalm) / 15) + 1.0);
            totalpesos = (int) (ttotal * 1500);


        }
        conta = conta + totalpesos;
        info->contador = conta;
        cout << "Se cobra $" << totalpesos << "\n";
        cout << "SUMA TOTAL $" << info->contador << "\n";
        Sleep(5000);
    }

    if (info) {
        if (*ppio == info) {
            *ppio = info->sig;
            if (*ppio) (*ppio)->ant = NULL;
            else *final = NULL;
        } else {
            info->ant->sig = info->sig;
            if (info != *final)
                info->sig->ant = info->ant;
            else
                *final = info->ant;
        }
        free(info); //devolver la memoria al sistema
    }
    //clrscr();
}

//buscar una carro

struct carro *buscar(char *Placa)
 {
    struct carro *info;
    info = ppio;
    while (info) {
        if (!strcmp(Placa, info->Placa))
            return info;
        info = info->sig; //obtener siguiente carro
    }
    cout << "Placa no encontrada" << endl;
    Sleep(2000);
    return NULL; //no encontrado
}



//mostrar la lista entera

void listar(void) {
    system("COLOR F1");
    system("cls");
    struct carro *info;
    info = ppio;


    while (info != NULL) {

        cout << info->Placa << "-";
        cout << info->Marca << "-";
        cout << info->Color << "-";
        cout << info->Fecha << "-";
        cout << info->Hora << "\n";

        info = info->sig; //obtener la siguiente carro
    }
    cout << "\n\nPRESIONE CUALQUIER TECLA PARA VOLVER AL MENU";
    //        getch();
}


//buscar un Placa en la lista

void buscar(void) {
    char Placa[40];
    struct carro *info;
    cout << "Introduce el Placa a encontrar: ";
    gets(Placa);
    info = buscar(Placa);
    if (!info)
        cout << "no encontrado";
    else //mostrar(info);
        //    getch();
        //clrscr();
    }

void Pantalla_Inicio() //Pantalla principal de la aplicacion
{
A:
    system("cls");
    system("color F1");
    int clave;
    // Portada inicial del programa


    cout << "\n\n                                 PARQUEADERO\n";
    cout << "\n                               Presentado por:\n";
    cout << "\n                         Jhon Freddy Gonzalez Duque";
    cout << "\n                     Estructura de Datos - Grupo 301305_5";
    cout << "\n                                  UNAD 2014\n\n";


    cout << "\n                         Ingrese Clave de Acceso:";
    scanf("%d", &clave);
    if (clave == 123) {
        cout << "\n\n             Bienvenido,  Presione una Tecla para Comenzar...";

    } else {
        cout << "\n\n                Error de Autenticacion, Ingrese nuevamente la Clave";
        getch();
        goto A;
    }
    //     getch();
}