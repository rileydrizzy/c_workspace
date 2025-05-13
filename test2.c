#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char TRACKS[][80] = {
    "I left my heart in havaard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
    "Ladi",
};

int search_track(char *track_f, int no_track)
/* Search for track
 */
{
    int found;
    for (int i = 0; i < no_track; i++)
    {
        if (strstr(TRACKS[i], track_f))
            found = i;
        break;
    }
    printf("Found track in %d\n", found + 1);
}

int main(void)
{
    char buffer[80];
    int no_track = 6;
    puts("Enter Track to find");
    scanf("%79s", buffer);
    search_track(buffer, no_track);
    return EXIT_SUCCESS;
}
