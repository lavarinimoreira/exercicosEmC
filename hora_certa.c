// hora_certa.c - Informa a hora e a data corrente.
//
// Autor	: Gabriel Lavarini <lavarinimoreira@gmail.com>
//
// ----------------------------------------------------------------
//
// Este programa armazena em uma struct informações de data, hora,
// dia, etc do computador do usuário e informa na saída padrão (STDOUT)
// a data e hora corrente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("\n\n\t	        HORA CERTA");
    printf("\n\t|===================|===================|\n\t");
    printf("| Data: %02d/%02d/%d  |", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("  Hora: %02d:%02d:%02d   |", tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("\n\t|===================|===================|\n\n");
	
    return EXIT_SUCCESS;
}
