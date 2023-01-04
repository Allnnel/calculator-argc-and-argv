#ifndef TEST_H
# define TEST_H
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char al (int argc, char **argv, int num[100], char symbol[100]);
char chek (int num[100], char symbol[100]);
char calculator (int num[100], char symbol[100]);
char account (char symbol[100], int num[100]);
int addition (int num[100], char symbol[100]);

#endif
