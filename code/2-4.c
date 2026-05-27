#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2) return 0;

    FILE* fp = fopen(argv[1], "r");

    int arr[26] = {0};
    
    int idx;
    char c;
    while ((c = fgetc(fp))!= EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            idx = c - 'a';
            arr[idx]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", 'a' + i, arr[i]);
    }

    fclose(fp);
}

