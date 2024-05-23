#include <stdio.h>
#include <stdlib.h>
#include "array.h"
void menu() {
    printf("1- Intput Values\n");
    printf("2- Delete Values\n");
    printf("3- Print Array\n");
    printf("4- Find Maximum Value\n");
    printf("5- Find Minium Value\n");
    printf("6- Calculate Average\n");
    printf("7- EXIT Program\n");
}

int main() {
    int *array = NULL;
    int option = 0;
    int SIZE = 0;
    while(option!=9) {
        menu();
        printf("choice = ");
        scanf("%d", &option);
        switch(option){
            case 1 :
                array = enterValue(array, &SIZE);
                break;
            case 2 :
                array = deleteValues(array,&SIZE);
                break;
            case 3 :
                printArray(array, SIZE);
                break;
            case 4 :
                printf("maxmium value = %d\n",findMaximumValue(array,SIZE));
                break;
            case 5 :
                printf("minium value = %d\n",findMiniumValue(array,SIZE));
                break;
            case 6:
                printf("Average valute = %f\n", calculateAverage(array,SIZE));
                break;
            case 7 :
                break;



        }
    }
    free(array);
}