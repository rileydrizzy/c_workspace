#include <stdio.h>
#include <stdlib.h>

EXIT_STATUS = 2;

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
            printf(",\n");
        else
            started = 1;
        if ((latitude < -90) || (latitude > 90))
            printf("Invalid latitude: %f\n", latitude);
        return EXIT_STATUS;
        if ((longitude < -180) || (longitude > 180))
            printf("Invalid longitude: %f\n", longitude);
        return EXIT_STATUS;
    }

    
    return EXIT_SUCCESS;

}
