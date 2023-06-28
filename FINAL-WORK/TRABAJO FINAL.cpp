#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mil 1000

/*
 *      NOTAS:
 *      TODAS LAS TAREAS SE MOSTRARAN CON UN NUMERO SUPERIOR A SU POSICION REAL EN EL ARREGLO
 *  --> [POSICION VERDADERA + 1] TITULO DE LA TAREA
 *
 *
 */

struct Tarea {

    int estado; //[1]Pendiente - [2]En Curso - [3]Terminada - [4]Cancelada
    int dificultad; //[1]Facil - [2]Media - [3]Dificil
    char descripcion[500]; //Descripcion de la tarea
    char titulo[100]; //Titulo de la tarea

};

struct Tarea Tareas[mil];
int ultimaTarea = 0; //guarda la primera posicion disponible en el arreglo despues de la ultima tarea agregada

//                  FUNCIONES Y PROCEDIMIENTOS

//  MENSAJES
void imprimirOpcionIncorrecta(){ //mensaje
    system("cls");
    printf("Opcion incorrecta.\n");
    system("pause");
}

void imprimirAtrasODetalles(){ //mensaje
    printf("\n Que quieres hacer a continuacion?");
    printf("\n\t [0] Volver.");
    printf("\n\t [...] Seleccionar una tarea para ir a sus detalles.\n");
}

//  FUNCIONES
void imprimirTitulo(){ //TITULO DEL TRABAJO Y AUTORES
    printf("\t\t\t TRABAJO FINAL | ChatGPT *on* \n");
    /*
     * NOMBRE DEL EQUIPO:
     *      ChatGPT *on*
     * INTEGRANTES DEL EQUIPO:
     *      Avaca, Marcos.
     *      Quiroga, Román.
     *      Videla Guliotti, Tobías.
     */
}

void agregarTarea(){ //crea una tarea introduciendo sus atributos
    int dificultad;
    int estado;

    system("cls");
    imprimirTitulo();

    fflush(stdin);
    printf("\n\t Titulo (Max. 100 caracteres) : ");
    gets(Tareas[ultimaTarea].titulo);

    fflush(stdin);
    printf("\n\t Descripcion (Max. 500 caracteres) : ");
    gets(Tareas[ultimaTarea].descripcion);

    printf("\n\t Dificultad (1 - 2 - 3) : ");
    do { //para que el usuario no ingrese un valor incorrecto
        scanf("%d",&dificultad);
        if (dificultad < 4 && dificultad > 0) {
            Tareas[ultimaTarea].dificultad = dificultad;
        }
    } while (dificultad > 3 || dificultad < 1);


    printf("\n\t Estado ([1]Pendiente - [2]En curso - [3]Terminada - [4]Cancelada) : ");
    do { //para que el usuario no ingrese un valor incorrecto
        scanf("%d",&estado);
        if (estado < 5 && estado > 0) {
            Tareas[ultimaTarea].estado = estado;
        }
    } while (estado > 4 || estado < 1);

    ultimaTarea++;
}

void editarTarea(int tareaSeleccionada){ //edita una tarea introduciendo sus atributos
    char nuevoTitulo[100];
    char nuevaDescripcion[500];
    int nuevoEstado;
    int nuevaDificultad;

    //tareaSeleccionada - 1 es la posicion real de la tarea que fue seleccionada
    system("cls");
    imprimirTitulo();
    printf("\n Estas editando la tarea \"%s\".\n",Tareas[tareaSeleccionada-1].titulo);
    printf("\t -Escribe un 5 (cinco) para no editar un atributo.\n");
    printf("\t -Escribe un 6 (seis) para dejar un atributo en blanco.\n");

    printf("\n\t Nuevo Titulo (Max. 100 caracteres) : ");
    fflush(stdin);
    gets(nuevoTitulo);
    if(strcmp(nuevoTitulo,"6")==0){
        strcpy(Tareas[tareaSeleccionada-1].titulo,"");
    } else {
        if(strcmp(nuevoTitulo,"5")!=0){
            strcpy(Tareas[tareaSeleccionada-1].titulo,nuevoTitulo);
        }
    }

    printf("\n\t Nueva Descripcion (Max. 500 caracteres) : ");
    fflush(stdin);
    gets(nuevaDescripcion);
    if(strcmp(nuevaDescripcion,"6") == 0){
        strcpy(Tareas[tareaSeleccionada-1].descripcion,"");
    } else {
        if(strcmp(nuevaDescripcion,"5") != 0){
            strcpy(Tareas[tareaSeleccionada-1].descripcion,nuevaDescripcion);
        }
    }

    printf("\n\t Nuevo Estado  ([1]Pendiente - [2]En curso - [3]Terminada - [4]Cancelada) : ");
    do { //para que el usuario no ingrese un valor incorrecto

        scanf("%d",&nuevoEstado);

        if(nuevoEstado == 6){
            Tareas[tareaSeleccionada-1].estado = 9;
        } else {
            if(nuevoEstado != 5){
                if(nuevoEstado < 5 && nuevoEstado > 0){
                    Tareas[tareaSeleccionada-1].estado = nuevoEstado;
                }
            }
        }

    } while (nuevoEstado > 6 || nuevoEstado < 0);

    printf("\n\t Nueva Dificultad (1 - 2 - 3) : ");
    do { //para que el usuario no ingrese un valor incorrecto

        scanf("%d",&nuevaDificultad);

        if(nuevaDificultad == 6){
            Tareas[tareaSeleccionada-1].dificultad = 9;
        } else {
            if(nuevaDificultad != 5){
                if(nuevaDificultad < 4 && nuevaDificultad > 0){
                    Tareas[tareaSeleccionada-1].dificultad = nuevaDificultad;
                }
            }
        }

    } while (nuevaDificultad > 6 || nuevaDificultad == 4 || nuevaDificultad < 0);

    printf("\n");
    printf("\nCambios guardados!");
    printf("\n");
    system("pause");

}

void buscarTarea(){ //busca una tarea introduciendo su titulo
    char titulo[100];
    int i,j,control;
    control = 0;

    system("cls");
    imprimirTitulo();
    printf("\n Ingrese el titulo de la tarea a buscar : ");

    fflush(stdin);
    gets(titulo);

    for(i = 0; i < ultimaTarea; i++){
       if(strcmp(Tareas[i].titulo,titulo)==0){
            if (control < 1){ //para que imprima una sola vez y no las tareas parecidas
                printf("\n Se ha encontrado una tarea : \n");
                printf("\t [%d] %s \n",i+1,Tareas[i].titulo);
                control = 1;
            }
            if (ultimaTarea > 1 && control < 2){ //si existe más de una tarea y control para imprimir una sola vez el mensaje
                printf(" Estas son las tareas parecidas : \n ");

                for(j = i + 1; j < ultimaTarea; j++){
                    if(strcmp(Tareas[i].titulo,Tareas[j].titulo)==0){
                        printf("\t\t [%d] %s \n",j+1,Tareas[j].titulo);
                    }
                    control = 2; //control para imprimir una sola vez el mensaje
                }
            }
        }
    }
    if(control == 0){
        printf("\n No se ha encontrado ninguna tarea. \n");
        printf("\n Presiona 0 para volver. \n");
    } else {
        imprimirAtrasODetalles();
    }
}

//  MENUS / INTERFACES
void imprimirMenuPrincipal(){ //menu
    system("cls");
    imprimirTitulo();
    printf("\n Bienvenido!\n Que quieres hacer? \n");
    printf("\n");
    printf("\t[1] Ver mis tareas.\n");
    printf("\t[2] Buscar una tarea.\n");
    printf("\t[3] Agregar una tarea.\n");
    printf("\t[0] Salir.\n");
    printf("\n");
}

void imprimirMenuVer(){ //submenu
    system("cls");
    imprimirTitulo();
    printf("\n Claro! Que tareas te gustaria ver?\n");
    printf("\n");
    printf("\t[1] Todas mis tareas.\n");
    printf("\t[2] Tareas pendientes.\n");
    printf("\t[3] Tareas en curso.\n");
    printf("\t[4] Tareas terminadas.\n");
    printf("\t[0] Volver.\n");
    printf("\n");
}

void imprimirMenuDetalles(int tareaSeleccionada){ //submenu
    //tareaSeleccionada - 1 es la posicion real de la tarea que fue seleccionada
    system("cls");
    imprimirTitulo();

    printf("\n Menu detalles de \"%s\":\n\n",Tareas[tareaSeleccionada-1].titulo);
    printf("\t %s \n\n",Tareas[tareaSeleccionada-1].titulo);
    printf("\t %s \n\n\n",Tareas[tareaSeleccionada-1].descripcion);
    switch(Tareas[tareaSeleccionada-1].estado){ //tienen un espacio menos para alinear mejor, porque gets() les agrega un espacio al principio por alguna razón...
        case 1:
            printf("\t Estado:              Pendiente \n");
            break;
        case 2:
            printf("\t Estado:              En Curso \n");
            break;
        case 3:
            printf("\t Estado:              Terminada \n");
            break;
        case 4:
            printf("\t Estado:              Cancelada \n");
            break;
        default:
            printf("\t Estado:              Sin datos \n");
            break;
    }
    switch(Tareas[tareaSeleccionada-1].dificultad){
        case 1:
            printf("\t Dificultad:          Facil \n");
            break;
        case 2:
            printf("\t Dificultad:          Media \n");
            break;
        case 3:
            printf("\t Dificultad:          Dificil \n");
            break;
        default:
            printf("\t Dificultad:          Sin datos \n");
            break;
    }
    printf("\n");
    printf("\n Presiona 0 para volver, o 1 para editar.\n");
}

void imprimirTodasLasTareas(){

    system("cls");
    imprimirTitulo();

    if (ultimaTarea != 0) {
        printf("\n Estas son todas tus tareas:\n");
        for(int i = 0; i < ultimaTarea; i++){ //listar todas las tareas agregadas, empezando por 1
            printf("\n\t [%d] %s\n",i+1,Tareas[i].titulo);
        }
        printf("\n");
        imprimirAtrasODetalles();
    } else {
        printf("\n No hay ninguna tarea.\n");
        printf("\n Presiona 0 para volver.\n");
    }
    printf("\n");
}

void imprimirTareasPendientes(){
    //validacion

    int control = 0;
    for(int i = 0; i < ultimaTarea; i++){ //encontrar una tarea pendiente
        if (Tareas[i].estado == 1){
            control = 1;
        }
    }

    //imprimir

    system("cls");
    imprimirTitulo();

    if (ultimaTarea != 0 && control != 0) {
        printf("\n Estas son tus tareas pendientes:\n");
        for(int i = 0; i < ultimaTarea; i++){ //listar todas las tareas pendientes
            if (Tareas[i].estado == 1){
                printf("\n\t [%d] %s\n",i+1,Tareas[i].titulo);
            }
        }
        printf("\n");
        imprimirAtrasODetalles();
    } else {
        printf("\n No hay tareas pendientes.\n");
        printf("\n Presiona 0 para volver.\n");
    }
    printf("\n");
}

void imprimirTareasEnCurso(){
    //validacion

    int control = 0;
    for(int i = 0; i < ultimaTarea; i++){ //encontrar una tarea en curso
        if (Tareas[i].estado == 2){
            control = 1;
        }
    }

    //imprimir

    system("cls");
    imprimirTitulo();

    if (ultimaTarea != 0 && control != 0) {
        printf("\n Estas son tus tareas en curso:\n");
        for(int i = 0; i < ultimaTarea; i++){ //listar todas las tareas en curso
            if (Tareas[i].estado == 2){
                printf("\n\t [%d] %s\n",i+1,Tareas[i].titulo);
            }
        }
        printf("\n");
        imprimirAtrasODetalles();
    } else {
        printf("\n No hay tareas en curso.\n");
        printf("\n Presiona 0 para volver.\n");
    }
    printf("\n");
}

void imprimirTareasTerminadas(){
    //validacion

    int control = 0;
    for(int i = 0; i < ultimaTarea; i++){ //encontrar tarea terminada
        if (Tareas[i].estado == 3){
            control = 1;
        }
    }

    //imprimir

    system("cls");
    imprimirTitulo();

    if (ultimaTarea != 0 && control != 0) {
        printf("\n Estas son tus tareas terminadas:\n");
        for(int i = 0; i < ultimaTarea; i++){ //listar todas las tareas terminadas
            if (Tareas[i].estado == 3){
                printf("\n\t [%d] %s\n",i+1,Tareas[i].titulo);
            }
        }
        printf("\n");
        imprimirAtrasODetalles();
    } else {
        printf("\n No hay ninguna tarea terminada.\n");
        printf("\n Presiona 0 para volver.\n");
    }
    printf("\n");
}

//  SWITCHS
void listarTareas(int opcion){
    switch (opcion) {
        case 0:
            break;
        case 1: //Todas
            int sel;
            do{
                imprimirTodasLasTareas();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int tareaSeleccionada = sel;
                        imprimirMenuDetalles(tareaSeleccionada);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            editarTarea(tareaSeleccionada);
                        }
                        sel = 0;
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 2: //Pendientes
            do{
                imprimirTareasPendientes();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int tareaSeleccionada = sel;
                        imprimirMenuDetalles(tareaSeleccionada);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            editarTarea(tareaSeleccionada);
                        }
                        sel = 0;
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 3: //En Curso
            do{
                imprimirTareasEnCurso();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int tareaSeleccionada = sel;
                        imprimirMenuDetalles(tareaSeleccionada);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            editarTarea(tareaSeleccionada);
                        }
                        sel = 0;
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 4: //Terminadas
            do{
                imprimirTareasTerminadas();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int tareaSeleccionada = sel;
                        imprimirMenuDetalles(tareaSeleccionada);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            editarTarea(tareaSeleccionada);
                        }
                        sel = 0;
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        default:
            imprimirOpcionIncorrecta();
            break;
    }
}

void seleccionarMenus(int opcion){
    switch (opcion) {
        case 1: //Ver
            int sel;
            do{
                imprimirMenuVer();
                scanf("%d",&sel);
                listarTareas(sel);
            } while (sel != 0);
            break;
        case 2: //Buscar
            do{
                buscarTarea();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int tareaSeleccionada = sel;
                        imprimirMenuDetalles(tareaSeleccionada);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            editarTarea(tareaSeleccionada);
                        }
                        sel = 0;
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 3: //Agregar
            do {
                agregarTarea();
                printf("\n");
                printf("\nTarea guardada.\n\n");
                system("pause");
                sel = 0;
            } while (sel != 0);
            break;
        default:
            imprimirOpcionIncorrecta();
            break;
    }
}


int main () {

    int opcion;

    //  EJECUTAR APLICACION
    do{

        imprimirMenuPrincipal();

        scanf("%d",&opcion);
        seleccionarMenus(opcion);


    } while (opcion != 0);

    printf("\nSaliendo...\n\n");

    return 0;
}
