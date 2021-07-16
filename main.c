/* Convert the input from km to m, cm, ft, in */
#include <stdio.h>
int main()
{
    float km, m, cm, inch, ft;
    printf("Enter the distance in Kilometres\n");
    scanf("%f", &km);
    m = km * 1000;
    cm = km * 100000;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance in Metres: %f\n", m);
    printf("Distance in Centimetres: %f\n", cm);
    printf("Distance in Inches: %f\n", inch);
    printf("Distance in Feet: %f\n", ft);
    return 0;
}
