#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("Test.csv", "w");

    typedef struct {
        char fname[99];
        char lname[99];
        char age[99];
        char sec[99];
        char ad1[99];
        char ad2[99];
        char ad3[99];
    } Info;

    Info info;
    
    printf("First Name: ");
    fgets(info.fname, sizeof(info.fname), stdin);
    info.fname[strcspn(info.fname, "\n")] = 0;

    printf("Last Name: ");
    fgets(info.lname, sizeof(info.lname), stdin);
    info.lname[strcspn(info.lname, "\n")] = 0;

    printf("Age: ");
    fgets(info.age, sizeof(info.age), stdin);
    info.age[strcspn(info.age, "\n")] = 0;

    printf("Section: ");
    fgets(info.sec, sizeof(info.sec), stdin);
    info.sec[strcspn(info.sec, "\n")] = 0;

    printf("Address 1: ");
    fgets(info.ad1, sizeof(info.ad1), stdin);
    info.ad1[strcspn(info.ad1, "\n")] = 0;

    printf("Address 2: ");
    fgets(info.ad2, sizeof(info.ad2), stdin);
    info.ad2[strcspn(info.ad2, "\n")] = 0;

    printf("Address 3: ");
    fgets(info.ad3, sizeof(info.ad3), stdin);
    info.ad3[strcspn(info.ad3, "\n")] = 0;

    if (file != NULL) {
            fseek(file, 0, SEEK_END);
            if (ftell(file) == 0) {
            fprintf(file, "FIRST NAME, LAST NAME, AGE, SECTION, ADDRESS 1, ADDRESS 2, ADDRESS 3\n");
            }  
                
    fprintf(file, "%s, %s, %s, %s, %s, %s, %s\n", info.fname, info.lname, info.age, info.sec, info.ad1, info.ad2, info.ad3);

    fclose(file);
    return 0;
}