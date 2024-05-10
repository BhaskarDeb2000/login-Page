#include <stdio.h>
#include <string.h>

struct UID
{
    char userName[20];
    char password[10];
    char confirmPassword[10];
} person1, person2;

void logIn(char w[20], char x[10], char y[10])
{
    if (strcmp(x, y) == 0)
    {
        printf("Welcome %s\n", w);
    }
    else
    {
        printf("Sorry Password doesn't match\n");
    }
}

int main()
{
    char a[20], b[10], c[10];
    printf("Enter Your UserName: ");
    scanf("%s", a);
    strcpy(person1.userName, a);
    printf("Enter Your Password: ");
    scanf("%s", b);
    strcpy(person1.password, b);
    printf("Repeat the Password: ");
    scanf("%s", c);
    strcpy(person1.confirmPassword, c);

    logIn(a, b, c);
    return 0;
}
