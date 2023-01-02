#include <stdio.h>

int main(int argc, char **argv) {

    if (argc < 2) {
        printf("error, argc < 2");
        return 0;
    }

    int i = 0;
    int ii = 0;


        while (argv[i][ii] != '\0') {
            ii++;
        }

        if (ii == 1) {
            printf("\n 1");
        }

        else printf("\n 2");

}
