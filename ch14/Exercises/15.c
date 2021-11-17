#include <stdio.h>

#if defined(FRENCH)
#define INSERT_DISK "Inserez Le Disque 1"
#
#elif defined(SPANISH)
#define INSERT_DISK "Inserte El Disco 1"
#
#else
#define INSERT_DISK "Insert Disk 1"
#
#endif

int main(void)
{
    printf("%s\n", INSERT_DISK);
}

