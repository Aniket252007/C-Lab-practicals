#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n----- MENU -----\n");
        printf("1. String Length\n");
        printf("2. String Concatenation\n");
        printf("3. String Copy\n");
        printf("4. String Compare\n");
        printf("5. String Reverse\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Length = %d\n", strlen(str1));
                break;
            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("After concatenation = %s\n", str1);
                break;
            case 3:
                printf("Enter string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0) 
                    printf("Strings are equal\n");
                else 
                    printf("Strings are not equal\n");
                break;
            case 5:
                printf("Enter string: ");
                scanf("%s", str1);
                strrev(str1);
                printf("Reversed string = %s\n", str1);
                break;
            case 6:
                printf("Program ended.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}