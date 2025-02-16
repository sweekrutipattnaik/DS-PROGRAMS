//Find first non-repeating character of given string

#include <stdio.h>
#include <string.h>
char nonRepeatingChar(char s[]) {
    int i,j, n = strlen(s);
    for (i = 0; i < n; ++i) {
        int found = 0;
        for (j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0)
            return s[i];
    }
    return '$';
}

int main() {
    char s[] = "racecar";
  
    printf("%c", nonRepeatingChar(s));
    return 0;
}

