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
    for (int i = 0; i <= no_track; i++)
    {
        if (!strcmp(track_f, TRACKS[i]))
            return i;
        else
            return -1;
    }
}

int main(void)
{
    char buffer[80];
    int no_track = 6;
    puts("Enter Track to find");
    scanf("%79s", buffer);
    int ans = search_track(buffer, no_track);
    printf("%d", ans);
    if (ans > -1)
        printf("Found track in %d\n", ans);
    else
        puts(" Track not found\n");
    return EXIT_SUCCESS;
}
