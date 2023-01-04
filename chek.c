#include "test.h"



char chek (int num[100], char symbol[100]) {

    int i = 0;
    int ii = 0;

    while (num[i] != '\0') {
        i++;
    }

    while (symbol[ii] != '\0') {
        ii++;
    }

    if (!i - ii == 1) {
        printf("\nerror");
        return 1;
    }

    else if (addition(num, symbol) == 10010010100101) {
        return 1;
    }

    else {
        calculator (num, symbol);
    }

}



int addition (int num[100], char symbol[100]) {

    if (num[0] == '\0' && (symbol[0] == '-' || symbol[0] == '+' || symbol[0] == '*' || symbol[0] == '/')) {

        printf("\nне введены числа: \n 1 число=");
        scanf("%d", &num[0]);
        printf("\n 2 число:");
        scanf("%d", &num[1]);

        int p = 0;

        if (symbol[0] == '-') {
            p = num[0] - num[1];
        }

        else if (symbol[0] == '+') {
            p = num[0] + num[1];
        }

        else if (symbol[0] == '*') {
            p = num[0] * num[1];
        }

        else if (symbol[0] == '/') {
            p = num[0] / num[1];
        }

        else {
            printf("\n ошибка");
            return 000;
        }

        printf("\n (((ответ == %d", p);

        return 10010010100101;
    }

}