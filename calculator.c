#include "test.h"

char calculator (int num[100], char symbol[100]) {

    int ii = 0;

    while (symbol[ii] != '\0') {

        int i = 0;

        if (symbol[ii] == '*' || symbol[ii] == '/') {

            i = ii;

            while (symbol[ii] == '*' || symbol[ii] == '/') {

                if (symbol[ii] == '*') {
                    num[i] = num[i] * num[ii + 1];
                } else if (symbol[ii] == '/') {
                    num[i] = num[i] / num[ii + 1];
                }

                ii++;
            }
            ii = ii - 1;
        }
        ii++;
    }

    account(symbol, num);
    return 0;
}



char account (char symbol[100], int num[100]) {
    int p = num[0];
    int ii = 0;

    while (symbol[ii] != '\0') {
        if (symbol[ii] == '-') {
            p = p - num[ii+1];
        }
        else if (symbol[ii] == '+') {
            p = p + num[ii+1];
        }
        ii++;
    }
    printf(" ответ == %d", p);
}