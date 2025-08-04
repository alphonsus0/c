#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i = 1;
    int batata = 10;
    while (batata>0)
        {
        printf("Temos %i batatas\n",batata);
        if (batata>0)
            {
            batata=batata-i;
            printf("Eu quero uma batata!\n");
            }
        }

    printf("Acabaram as batatas!\n");
    printf("Volto outra hora...");

    return 0;
}
