#include <stdio.h>
#include <string.h>
// #include <Windows.h>

// char outbuf[1000];
// #define NUM 55

struct studentdata
{
    int stdnum;
    char number[999];
    char first_name[100];
    char last_name[100];
    int subject[3];
    struct student *next;
};

int main(void)
{
    printf("Function Menu:\n ---------------------------\n1 - create a new file.\n2 - open an existed file.\n3 - Insert a score data.\n4 - Find a specific student data.\n5 - Update a specific student data.\n6 - Delete a specific student data.\n7 - List all of student score data.\n0 - Exit\n");
    int n = 0;
    printf("=>  ");
    scanf("%d", &n);
    char data[999];
    FILE *ctptr;
    while (n != 0)
    {
        if (n == 1) // create a new file
        {
            char c;
            printf("File name : ");
            scanf(" %s", data);
            if ((ctptr = fopen(data, "w+")) == NULL)
            {
                puts("Can not open the file");
                // 檔案存在但無法開啟
            }
            else
            {

                printf("The file [%s] is existed\n", data);
                printf("Do you want to overwrite it? (Y/N)?");
                scanf(" %c", &c);
                if (c == 'Y') //要複寫檔案
                {
                    struct studentdata list = {1, "", "", "", {0, 0, 0}};
                    for (size_t i = 0; i <= 49; i++)
                    {
                        fwrite(&list, sizeof(list), 1, ctptr);
                    }
                }
            }
            fclose(ctptr);
        }
        else if (n == 2) // open a file
        {
            // char data[9999];
            printf("File name : ");
            scanf(" %s", data);
            if ((ctptr = fopen(data, "r+")) == NULL)
            {
                puts("Could not open the file");
            }
            // fclose(ctptr);
        }
        else if (n == 3) //Insert a specific student data
        {
            struct studentdata student = {0, "", "", {0, 0, 0}};
            printf("Enter student number \"(1 to 50 input): \"");
            scanf(" %d", &student.stdnum);
            while (student.stdnum != 0)
            {
                printf("=> ");
                scanf(" %s %s %d %d %d ", student.first_name, student.last_name, &student.subject[0], &student.subject[1], &student.subject[2]);
                fprintf(ctptr, "%d %s %s %d %d %d", student.stdnum, student.first_name, student.last_name, &student.subject[0], &student.subject[1], &student.subject[2]);
            }
            fclose(ctptr);
        }
        printf("Function Menu:\n ---------------------------\n1 - create a new file.\n2 - open an existed file.\n3 - Insert a score data.\n4 - Find a specific student data.\n5 - Update a specific student data.\n6 - Delete a specific student data.\n7 - List all of student score data.\n0 - Exit\n");
        printf("=>  ");
        scanf("%d", &n);
    }

    return 0;
}