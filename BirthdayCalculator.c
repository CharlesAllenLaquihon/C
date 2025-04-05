#include <stdio.h>
#include <time.h>

int main(){
    printf("        |--------------------|\n");
    printf("        |IS IT YOUR BIRTHDAY?|\n");
    printf("        |--------------------|\n");
    printf("Please Input your Birth Date (MM/DD/YY)\n");
    printf("Example: 05/04/2006\n\n");

    struct tm birthDate = {0};

    printf("What is you Birth Month? : ");
    scanf("%d", &birthDate.tm_mon);
    
    printf(" What is your Birth Day? : ");
    scanf("%d", &birthDate.tm_mday);

    printf("What is your Birth Year? : ");
    scanf("%d", &birthDate.tm_year);

    birthDate.tm_mon -= 1; 

    time_t current_Date;
    time(&current_Date);

    struct tm current_Time = *localtime(&current_Date);

    birthDate.tm_year = current_Time.tm_year;
    
    time_t birth_Time = mktime(&birthDate);

    int seconds_difference = difftime(current_Date, birth_Time);
    int days_difference = seconds_difference / (60 * 60 * 24);

    if (days_difference == 0) 
    {
        printf("\n...............\n");
        printf("HAPPY BIRTHDAY!\n");
        printf("...............\n");
    } 
    else if (days_difference < 0) 
    {
        printf("\n................................\n");
        printf("Your birthday has not yet passed\n");
        printf("%d day/days until your birthday", days_difference*(-1)+1);
        printf("\n................................\n");
    } 
    else 
    {
        printf("\n........................................\n");
        printf("Your birthday has already passed\n");
        printf("%d day/days has passed since your birthday", days_difference);
        printf("\n........................................\n");
    }
}