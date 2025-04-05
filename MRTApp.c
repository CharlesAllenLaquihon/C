#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {
    while (true)
    {
        int loop = 0;
        while (loop == 0)
        {
             char starter;
        printf("MRT STATION\n[1] Start [2] Exit\nEnter Input: ");
        scanf(" %c", &starter);
        switch (starter)
        {
            case '1':
                int start_des, tar_sta, distance, dis, fare, payment;

                int loop5 = 0;

                printf("[1]  Taft Ave.\n");
                printf("[2]  Magallanes\n");
                printf("[3]  Ayala\n");
                printf("[4]  Buendia\n");
                printf("[5]  Guadalupe\n");
                printf("[6]  Boni\n");
                printf("[7]  Shaw Blvd.\n");
                printf("[8]  Ortigas\n");
                printf("[9]  Santolan-Anapolis\n");
                printf("[10] Araneta Cubao\n");
                printf("[11] GMA Kamuning\n");
                printf("[12] Quezon Ave.\n");
                printf("[13] North Ave.\n");

                while (loop5 == 0)
                {

                    int loop1 = 0;
                    int loop2 = 0;

                    while (loop1 == 0)
                    {
                        printf("Enter starting station: ");
                        scanf("%d", &start_des);

                        if (start_des >= 1 && start_des <= 13)
                        {
                            loop1 = 1;
                        }
                        else
                        {
                            printf("Invalaid Input!\n");
                            loop1 = 0;
                        }

                    }

                    while (loop2 == 0)
                    {
                        printf("Enter target station: ");
                        scanf("%d", &tar_sta);

                        if (tar_sta >= 1 && tar_sta <= 13)
                        {
                            loop2 = 1;
                        }
                        else
                        {
                            printf("Invalaid Input!\n");
                            loop2 = 0;
                        }
                    }

                    if (start_des == tar_sta)
                    {
                        printf("You're already in this station\n");
                        loop5 = 0;
                    }
                    else
                    {
                        loop5 = 1;
                    }

                }
                int loop3 = 0;
                while (loop3 == 0)
                {
                    printf("Student, Senior Citizen, PWD? [1]YES [2]NO: ");
                    scanf("%d",&dis);

                    if (dis == 1 || dis == 2)
                    {
                        loop3 = 1;
                    }
                    else
                    {
                        printf("Invalid Input!\n");
                    }

                }

                const char *stations[14] = {
                    "Invalid starting station",
                    "Taft Ave.","Magallanes","Ayala",
                    "Buendia","Guadalupe","Boni",
                    "Shaw Blvd.","Ortigas",
                    "Santolan-Anapolis",
                    "Araneta Cubao",
                    "GMA Kamuning",
                    "Quezon Ave.",
                    "North Ave."};

                printf("Starting station: %s\n", stations[start_des]);
                printf("Target station: %s\n", stations[tar_sta]);


                if (start_des > tar_sta) 
                {
                    int temp = start_des;
                    start_des = tar_sta;
                    tar_sta = temp;
                }

                distance = tar_sta - start_des;

                if (distance == 1 || distance == 2) 
                {
                    if (dis == 1) 
                    {
                        fare = 13 - 3;
                    } 
                    else 
                    {
                        fare = 13;
                    }
                    printf("\nFare: %d PHP\n", fare);
                } 
                else if (distance == 3 || distance == 4) 
                {
                    if (dis == 1) 
                    {
                        fare = 16 - 3;
                    } 
                    else 
                    {
                        fare = 16;
                    }
                    printf("\nFare: %d PHP\n", fare);
                } 
                else if (distance == 5 || distance == 6 || distance == 7) 
                {
                    if (dis == 1) 
                    {
                        fare = 20 - 4;
                    } 
                    else 
                    {
                        fare = 20;
                    }
                    printf("\nFare: %d PHP\n", fare);
                } 
                else if (distance == 8 || distance == 9 || distance == 10) 
                {
                    if (dis == 1) 
                    {
                        fare = 24 - 5;
                    } 
                    else 
                    {
                        fare = 24;
                    }
                    printf("\nFare: %d PHP\n", fare);
                } 
                else if (distance == 11 || distance == 12) 
                {
                    if (dis == 1) 
                    {
                        fare = 28 - 4;
                    } 
                    else 
                    {
                        fare = 28;
                    }
                    printf("\nFare: %d PHP\n", fare);
                } 
                else 
                {
                    printf("\nInvalid distance\n");
                }

                int loop4 = 0;
                while (loop4 == 0)
                {
                    printf("Enter payment: ");
                    scanf("%d", &payment);

                    if (payment < fare)
                    {
                        printf("Insufficient payment! Please pay proper amount.\n");
                        loop4 = 0;

                    }
                    else
                    {
                        printf("Your paid: %d\n", payment);
                        payment = payment - fare;
                        printf("Your change is: %d\n", payment);
                        loop4 = 1;
                    }
                }

                struct tm *ptr;
                time_t t;
                char time_now[20];
                t = time(NULL);
                ptr = localtime(&t);
                strftime(time_now, sizeof(time_now), "%Y-%m-%d %H:%M:%S", ptr);
                printf("%s\n", time_now);
        
                FILE *file = fopen("Transactions.csv", "a");
                
                if (file == NULL)
                {
                    printf("Error in opening the file!");
                    return 1;
                }

                if (file != NULL) {
                fseek(file, 0, SEEK_END);
                if (ftell(file) == 0) {
                    fprintf(file,"TIME, STARTING STATION, TARGET STATION, FARE\n");  
                }
                 
                fprintf(file,"%s, %s, %s, %d\n", time_now,  stations[start_des],  stations[tar_sta], fare);
                fclose(file);
                loop = 1;
                break;

            case '2':
                printf("Thank you and Goodbye\n");
                return 0;
            default:
                printf("Invalid Input\n");
                loop = 0;
        }
        
       
        }
    }
}
}