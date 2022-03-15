#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

void execute_action(int action) {
    printf("you selected action %d",action);
}
int menu() // header/ prototype
{
     int action;
    do {
        printf("\tCounty Library\n");
        printf("Welcome   Mr. Eric\n");
        printf("what would you like to do?\n");
        printf("1. view user\n");
        printf("2. Add new User\n");
        printf("3. Edit User\n");
        printf("4. Delete user\n");
        printf("5. Change Password\n");
        printf("6. Log out\n");
        printf("7. Exit System\n");
        printf("selected Action:");
        scanf("%d",&action);
        if (action < 1 || action > 7) {
            system("cls");
            printf ("invalid action ! ! ! Try again.\n");
        }
    } while (action < 1 || action > 7);

void execute_action(int action);switch(action) {
     case 1:
       printf("list of users\n");
     break;
     case 2:
       printf("adding a new user\n");
       break;
     case 3:
       printf("Editing user\n");
       break;
     case 4:
       printf("deleting user\n");
       break;
     case 5:
       printf("changing password\n");
       break;
     case 6:
       printf("you have been logged out\n");
       break;
     case 7:
       printf("bye\n");
       break;
     default:
       printf("invalid action\n");
     }

     void close() {
         printf("thanks for using the system\n");
         printf("created by Eric Mburu\n");
         printf("bye\n");
         Sleep(2000);
         exit(0);
     }

    }


