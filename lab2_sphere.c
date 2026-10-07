#include <stdio.h>
#include <math.h>
 
int main()
{
    // TODO 1: declare a double variable for the input surface area

    double area;
 
    // TODO 2: declare double variables for pi, radius, and volume
    //         (set pi = 3.14159265358979, or use the M_PI constant)
 
    double pi;
    double radius;
    double volume;
    pi = M_PI;
   
    // TODO 3: prompt for and read the surface area

    printf("Enter the surface area: ");
    scanf("%lf", &area);
 
    // TODO 4: radius = sqrt(area / (4 * pi))

    radius = sqrt(area / (4 * pi));
 
    // TODO 5: volume = (4.0/3.0) * pi * radius*radius*radius

    volume = (4.0/3.0) * pi * radius*radius*radius;
 
    // TODO 6: print the volume
 
    printf("Volume: %lf\n", volume);
    
    return 0;
}
