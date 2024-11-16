#include <stdio.h>
#include <stdlib.h>

void fortune_cookie(char msg[])
{
    printf("Message read: %s\n", msg);
    printf("msg size is %i bytes\n", sizeof(msg));
}

int main(void)
{
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return EXIT_SUCCESS;
}
