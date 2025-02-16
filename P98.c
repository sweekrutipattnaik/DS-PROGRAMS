//C Program to Print the First Letter of Each Word

#include <stdio.h>
#include <string.h>

void print(char *s) {
    int i,first = 1;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && first) {
            printf("%c ", s[i]);
            first = 0;        
        }
        if (s[i] == ' ')
            first = 1;
    }
}

int main() {
    char s[] = "welcome to CUTM";
    print(s);
    return 0;
}

