#include <stdio.h>
#include "../inc/Equivalent.h"

void Net_Series_Resistance(int *r, int t)
{
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += r[i];
    }
    printf("The Net Equivalent Resistance in series is : %d ohm\n", sum);
}

void Net_Parallel_Resistance(int *r, int t)
{
    float sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += 1.0 / r[i];
    }
    sum = 1.0 / sum;
    printf("The Net Equivalent Resistance in parallel is :%f ohm\n", sum);
}

void Net_Series_Inductance(int *l, int t)
{
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += l[i];
    }
    printf("The Net Equivalent Inductance in series is : %d H\n", sum);
}

void Net_Parallel_Inductance(int *l, int t)
{
    float sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += 1.0 / l[i];
    }
    sum = 1.0 / sum;
    printf("The Net Equivalent Inductance in parallel is :%f H\n", sum);
}

void Net_Series_Capacitance(int *c, int t)
{
    float sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += 1.0 / c[i];
    }
    sum = 1.0 / sum;
    printf("The Net Equivalent Capacitance in Series is :%f F\n", sum);
}

void Net_Parallel_Capacitance(int *c, int t)
{
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += c[i];
    }
    printf("The Net Equivalent Capacitance in Parallel is : %d F\n", sum);
}

int main()
{
    int ip, t;
    int X[1000];
    int *r;
    printf("NOTE : Maximum No.of Resistor or Inductor or Capcitor is 1000\n");
    printf("What do you want to calculate \nPress 1 for Equivalent series Resistance \nPress 2 for Equivalent parallel Resistance\nPress 3 for Equivalent series Inductance\nPress 4 for Equivalent parallel Inductance\nPress 5 for Equivalent series Capacitance\nPress 6 for Equivalent parallel Capacitance\n");
    scanf("%d", &ip);
    switch (ip)
    {
    case 1:
        printf("Enter the no.of Resistor's (ohm) in Series\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of R%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Series_Resistance(r, t);
        break;
    case 2:
        printf("Enter the no.of Resistor's (ohm) in Parallel\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of R%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Parallel_Resistance(r, t);
        break;
    case 3:
        printf("Enter the no.of Inductor's (H) in Series\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of L%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Series_Inductance(r, t);
        break;
    case 4:
        printf("Enter the no.of Inductor's (H) in Parallel\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of L%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Parallel_Inductance(r, t);
        break;
    case 5:
        printf("Enter the no.of Capacitor's (F) in Series\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of C%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Series_Capacitance(r, t);
        break;
    case 6:
        printf("Enter the no.of Capacitor's (F) in Parallel\n");
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            printf("Enter the value of C%d : ", i + 1);
            scanf("%d", &X[i]);
        }
        r = X;
        Net_Parallel_Capacitance(r, t);
        break;
    default:
        printf("Please Enter valid number");
        break;
    }
    return 0;
}
