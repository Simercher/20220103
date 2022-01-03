#include <stdio.h>
#include <string.h>
// #include <Windows.h>

// char outbuf[1000];
int main(void)
{
    printf("Function Menu:\n");
    printf(" ---------------------------\n");
    printf("1 - create a new file.\n");
    printf("2 - open an existed file.\n");
    printf("3 - Insert a score data.\n");
    printf("4 - Find a specific student data.\n");
    printf("5 - Update a specific student data.\n");
    printf("6 - Delete a specific student data.\n");
    printf("7 - List all of student score data.\n");
    printf("0 - Exit\n");
    int n = 0;
    printf("=>  ");
    scanf("%d");
    char data[9999];
    printf("File name : ");
    scanf("%s", data); 
    FILE *ctptr;
    while(n != 0)
    {
        switch (n)
        {
        case 1:
            if ((ctptr = fopen(data, "w")) == NULL)
            {
                put("Could not find the file");
            }else
            {
                printf("")
            }
            break;

        case 2:
            /* code */
            break;
        
        case 3:
            /* code */
            break;

        case 4:
            /* code */
            break;

        case 5:
            /* code */
            break;

        case 6:
            /* code */
            break;

        case 7:
            /* code */
            break;
        
        default:
            break;
        }
        printf("Function Menu:\n");
        printf(" ---------------------------\n");
        printf("1 - create a new file.\n");
        printf("2 - open an existed file.\n");
        printf("3 - Insert a score data.\n");
        printf("4 - Find a specific student data.\n");
        printf("5 - Update a specific student data.\n");
        printf("6 - Delete a specific student data.\n");
        printf("7 - List all of student score data.\n");
        printf("0 - Exit\n");
        printf("=>  ");
        scanf("%d");
    }

    return 0;
}