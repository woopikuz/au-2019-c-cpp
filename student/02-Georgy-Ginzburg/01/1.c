#include <stdio.h>

#define NUMBER_OF_TYPES 9

const char *Types[NUMBER_OF_TYPES] = {
        "char",
        "int",
        "short",
        "long",
        "unsigned_int",
        "unsigned_short",
        "unsigned_long",
        "float",
        "double"
};

struct {
    char a;
    int b;
    short c;
    long d;
    unsigned int e;
    unsigned short f;
    unsigned long g;
    float h;
    double i;
} manyTypes = {'a',
               100500,
               100,
               1000050000,
               1050,
               105,
               3000100000,
               3.1419,
               2.7182
};

#define printRow(x) \
printf("             %c", (char) x); \
printf("             %d", (int) x); \
printf("             %hi", (short int) x); \
printf("             %li", (long int) x); \
printf("             %u", (unsigned int) x); \
printf("             %hu", (unsigned short) x); \
printf("             %lu", (unsigned long) x); \
printf("             %e", (float) x); \
printf("             %e", (double) x);\
printf("\n");

int main() {

    printf("##############");
    for (int i = 0; i < NUMBER_OF_TYPES; i++) {
        printf("           ");
        printf("%s", Types[i]);
    }
    printf("\n");
    int i = 0;
    printf("%s          ", Types[i]);
    printRow(manyTypes.a);
    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.b);

    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.c);

    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.d);

    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.e);

    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.f);

    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.g);


    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.h);


    i++;
    printf("%s          ", Types[i]);
    printRow(manyTypes.i);

};
