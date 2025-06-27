#include <stdio.h>
#include <string.h>
void cargaDeDatos();
// void menu();
char destino[4][4], codDestino[4][4] = {"BRA", "MDQ", "MZA", "BRC"};
apellido[100][30], nombre[100][50];
int dni[100], edad[100];
int cantDestinos = 4, cantPasajeros = 0, cantBRA = 0, cantMDQ = 0, cantMZA = 0, cantBRC = 0;
int opcion;
int seguroPasajero = 0;
float importePasaje[100], importeTotal = 0;
int main() {
   cargaDeDatos();
//    menu();
   return 0;
}

void  cargaDeDatos(){
   do
   {
      printf("Ingrese la cantidad de pasajeros total (maximo 100): \n");
      scanf("%d", &cantPasajeros);
      if (cantPasajeros > 100)
      {
        printf("Valor no aceptado de pasajeros\n");
      }
      
   } while (cantPasajeros > 100);
   

    for (int i = 0; i < cantPasajeros; i++) {
        printf("\n--- DATOS DEL PASAJERO NUMERO: %d ---\n", i + 1);
      do
      {
         printf("Ingrese el DNI: ");
         scanf("%d", &dni[i]);
      } while (dni[i] < 1000000 || dni[i] > 99999999);
      

        printf("Ingrese el nombre: ");
        scanf("%s", nombre[i]);

        printf("Ingrese el apellido: ");
        scanf("%s", apellido[i]);
      do
      {
         printf("Ingrese la edad: ");
         scanf("%d", &edad[i]);
      } while (edad[i] <= 0);
      
      do
      {
         printf("Seleccione el destino pasajero %s %s:\n", nombre[i], apellido[i] );
         printf("1. Brasil (BRA)\n");
         printf("2. Mar Del Plata (MDQ)\n");
         printf("3. Mendoza (MZA)\n");
         printf("4. Bariloche (BRC)\n");
         scanf("%d", &opcion); 
         switch (opcion) {
             case 1:
               if (cantBRA >= 60) {
                  printf("No hay más lugares para Brasil.\n");
                  break;
               }
                 strcpy(destino[i], "BRA");
                 cantBRA++;
                 importePasaje[i] = 25000;
                 if (edad[i] < 5)
                 {
                  importePasaje[i]+=2000;
                 }
                 
                 break;
             case 2:
             if (cantMDQ >= 60) {
                  printf("No hay más lugares para Mar Del Plata.\n");
                  break;
               }
                 strcpy(destino[i], "MDQ");
                 cantMDQ++;
                 importePasaje[i] = 14000 ;
                 if (edad[i] < 5)
                 {
                  importePasaje[i]+=2000;
                 }
                 break;
             case 3:
              if (cantMZA >= 60) {
                     printf("No hay más lugares para Mendoza.\n");
                     break;
                  }
                 strcpy(destino[i], "MZA");
                 cantMZA++;
                 importePasaje[i] = 19000;
                 if (edad[i] < 5)
                 {
                  importePasaje[i]+=2000;
                 }
                 break;
             case 4:
              if (cantBRC >= 60) {
                     printf("No hay más lugares para Bariloche.\n");
                     break;
                  }
                 strcpy(destino[i], "BRC");
                 cantBRC++;
                 importePasaje[i] = 23000;
                 if (edad[i] < 5)
                 {
                  importePasaje[i]+=2000;
                 }
                 break;
             default:
                 printf("Opcion invalida\n");
                 break;
         }
      } while (opcion < 1 || opcion > 4);
      
    }
}