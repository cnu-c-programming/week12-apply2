#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    char line[256];
    while (fgets(line, sizeof line, fp) != NULL)
    {
        int num = 0;
        if (sscanf(line, "%d", &num) == 1)
        {
            sum = num + sum;
        }

        else fprintf(stderr, "invalid input %s", line);
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
