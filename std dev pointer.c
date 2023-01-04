#include <math.h>
#include <stdio.h>
float standardDeviation(float data[]);
int main()
{
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", standardDeviation(data));
    return 0;
}

float standardDeviation(float data[])
{
    float sum = 0.0, mean, dev = 0.0;
    int i;
    for (i = 0; i < 10; ++i)
        {
        sum += data[i];
        }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
        {
        dev += pow(data[i] - mean, 2);
        }
    return sqrt(dev / 10);
}
