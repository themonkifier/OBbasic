#include <stdio.h>
#include <string.h>

void gets(char* buffer, int size) {
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\r\n")] = '\0';
}

int main(void) {
    char buffer[BUFSIZ] = {0};

    puts("OB BASIC");
    gets(buffer, sizeof(buffer));
    puts(buffer);
}
