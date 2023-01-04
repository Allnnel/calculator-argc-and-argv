#include "test.h"

int main(int argc, char **argv) {

    system("chcp 65001");

    if (argc < 2) {
        printf("error, argc < 2");
        return 0;
    }

    int num[100];
    char symbol[100];

    if (al(argc,argv,num, symbol) == 1) {
        printf("1");
       return 1;
   }

    else if (chek(num, symbol) == 1) {
        return 1;
    }


}
