#include <stdio.h>
#include <stdlib.h>
#include "../inc/Star_Delta_Conversion.h"
void Star_to_Delta_conversion(int *ptr)
{
    float sum = 0;
    int j = 1;
    sum = ptr[0] * ptr[1] + ptr[1] * ptr[2] + ptr[0] * ptr[2];
    for (int i = 2; i >= 0; i--)
    {
        printf("Corresponding delta value of R%d is : %f\n", j++, sum / ptr[i]);
    }
}
void Delta_to_Star_conversion(int *ptr)
{
    float sum = 0;
    sum = ptr[0] + ptr[1] + ptr[2];
    printf("Corresponding Star value of RA is :%f\n", (ptr[0] * ptr[1]) / sum);
    printf("Corresponding Star value of RB is :%f\n", (ptr[0] * ptr[2]) / sum);
    printf("Corresponding Star value of RC is :%f\n", (ptr[2] * ptr[1]) / sum);
}

struct Star_circuit_resistors
{
    int RA;
    int RB;
    int RC;
};
typedef struct Star_circuit_resistors Rstar;

struct Delta_circuit_resistors
{
    int R1;
    int R2;
    int R3;
};
typedef struct Delta_circuit_resistors Rdelta;

void convert()
{
    printf("NOTE : Value of Resistor's should be in ohm\n");
    printf("What do you want convert :\nPress 1 for Star to Delta conversion\nPress 2 for Delta to Star conversion\n");
    int ip;
    scanf("%d", &ip);
    Rstar *Rs;
    Rs = (Rstar *)malloc(sizeof(Rstar));
    Rdelta *Rd;
    Rd = (Rdelta *)malloc(sizeof(Rdelta));
    switch (ip)
    {
    case 1:
        printf("Enter the value of RA : ");
        scanf("%d", &(*Rs).RA);
        printf("Enter the value of RB : ");
        scanf("%d", &(*Rs).RB);
        printf("Enter the value of RC : ");
        scanf("%d", &(*Rs).RC);
        Star_to_Delta_conversion(&(*Rs).RA);
        break;
    case 2:
        printf("Enter the value of R1 : ");
        scanf("%d", &(*Rd).R1);
        printf("Enter the value of R2 : ");
        scanf("%d", &(*Rd).R2);
        printf("Enter the value of R3 : ");
        scanf("%d", &(*Rd).R3);
        Delta_to_Star_conversion(&(*Rd).R1);
        break;
    default:
        printf("Please Enter valid number");
        break;
    }
    free(Rs);
    free(Rd);
}
