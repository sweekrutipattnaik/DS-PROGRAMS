//Flexible Array Members in a structure in C

// C program for variable length members in
// structures in GCC
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int stud_id;
    int name_len;
    int struct_size;
    char stud_name[];
};

struct student* createStudent(int id, char a[]) {
    
    struct student *s = malloc(sizeof(*s) + sizeof(char) * (strlen(a) + 1)); 

    if (s == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    s->stud_id = id;
    s->name_len = strlen(a);
    strcpy(s->stud_name, a);  
    s->struct_size = sizeof(*s) + sizeof(char) * (strlen(s->stud_name) + 1);

    return s;
}
void printStudent(struct student* s) {
    printf("Student_id : %d\n"
           "Stud_Name : %s\n"
           "Name_Length: %d\n"
           "Allocated_Struct_size: %d\n\n",
           s->stud_id, s->stud_name, s->name_len,
           s->struct_size);
}

int main() {
    struct student* s1 = createStudent(523, "disha");
    struct student* s2 = createStudent(535, "chiku");

    printStudent(s1);
    printStudent(s2);
    printf("Size of Struct student: %lu\n", sizeof(struct student));
    printf("Size of Struct pointer: %lu\n", sizeof(s1));
    free(s1);
    free(s2);

    return 0;
}

