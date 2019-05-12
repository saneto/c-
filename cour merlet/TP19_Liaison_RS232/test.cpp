#include <stdio.h>
#include <unistd.h>

int main()
{
    char c;
    c = fgetc(stdin);
    sleep(10);
    if (c != EOF)
    {
        printf("Code ASCII en hexa du caractère lu : %x, caractère lu : %c\n", c, c);
    }
    else
    {
        printf("EOF\n");
    }
    return 0;
}
