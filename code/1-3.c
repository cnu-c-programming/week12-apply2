#include <stdio.h>

int main(int argc, const char* argv[], const char* envp[]) {
    const char** filename = envp;

    while (*filename != NULL)
    {
        printf("%s\n," *filename);
        filename++;
    }
    
    return 0;
}
