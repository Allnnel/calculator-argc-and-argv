#include "test.h"

char al (int argc, char **argv, int num[100], char symbol[100]) {

    int i = 1;
    int q = 0;
    int qq = 0;

    while (i != argc) {
        int ii = 0;
        while (argv[i][ii] != '\0') {

            if (argv[i][ii] >= '0' && argv[i][ii] <= '9') {
                num[q] = argv[i][ii] - '0';

                while (argv[i][ii + 1] >= '0' && argv[i][ii + 1] <= '9') {
                    num[q] = (num[q] * 10) + argv[i][ii + 1] - '0';
                    ii++;
                }
                q++;
            }

            else if (argv[i][ii] == '-' && argv[i][ii+1] >= '0' && argv[i][ii+1] <= '9') {

                num[q] = argv[i][ii+1] - '0';
                while (argv[i][ii+2] >= '0' && argv[i][ii+2] <= '9') {
                    num[q] = ( num[q] * 10 ) + argv[i][ii+2] - '0';
                    ii++;
                }
                num[q] = num[q] * -1;
                q++;
                ii++;

            }

            else if (argv[i][ii] == '-' || argv[i][ii] == '+' || argv[i][ii] == '*' || argv[i][ii] == '/') {
                symbol[qq] = argv[i][ii];
                qq++;
            }


            else {
                if (argv[i][ii] != ' ') {
                    printf("\n error - argv[%d][%d]", i, ii);
                    return 1;
                }
            }

           ii++;

        }

        i++;
    }

    num[q] = '\0';
    symbol[qq] = '\0';
    q = 0;
    qq = 0;

}





