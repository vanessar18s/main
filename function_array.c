#include <stdio.h>

double smallest_num(double array[], int length)
{
    double smallest;
    int i = 1;

    smallest = array[0];

    while (i < length) {
        if (array[i] < smallest) {
            smallest = array[i];
        }

        ++i;
    }

    return smallest;
}

int smallest_count(double array[], int length, double smallest)
{
    int count = 0;
    int i = 0;

    while (i < length) {
        if (array[i] == smallest) {
            ++count;
        }

        ++i;
    }

    return count;
}

int main()
{
    double array[100];
    double smallest;
    double x;
    
    int i = 0;
    int length = 0;
    int count = 0;

    printf("Enter a sequence of non-negative numbers: ");
    scanf("%lf", &x);

    while (x >= 0) {
        array[i] = x;
        ++i;
        ++length;
        scanf("%lf", &x);
    }

    if (length == 0) {
        printf("No numbers\n");
    } else {
        smallest = smallest_num(array, length);
        count = smallest_count(array, length, smallest);

        printf("smallest = %lf\n", smallest);
        printf("%d\n", count);
    }

    return 0;
}


