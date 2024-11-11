#include <stdio.h>
#include <string.h>

#define FILENAME "file_test.txt"

#define MAX_LINE    256

int main ()
{
    FILE * fp;

    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("File %s not found\n", FILENAME);
        return -1;
    }

    char text_line[MAX_LINE];
    int cnt_line = 1;
    int dim_file = 0;

    while ( fgets(text_line, MAX_LINE, fp) != NULL) {
        int dim_str = strlen(text_line);
        dim_file = dim_file + dim_str;

        printf("%2d: %s", cnt_line, text_line);

        cnt_line = cnt_line +1; // cnt_line++;
    }

    printf("lines: %d\n", cnt_line);
    printf("dim: %d\n", dim_file);

    fclose(fp);
    return 0;
}