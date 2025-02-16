//C Program to Compare Two Strings Lexicographically

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Centurion";
    char s2[] = "cutm";
    int res = strcmp(s1, s2);

    if (res < 0)
        printf("\"%s\" is smaller than \"%s\".\n", s1, s2);
    else if (res > 0)
        printf("\"%s\" is greater than \"%s\".\n", s1, s2);
    else
        printf("\"%s\" is equal to \"%s\".\n", s1, s2);

    return 0;
}

