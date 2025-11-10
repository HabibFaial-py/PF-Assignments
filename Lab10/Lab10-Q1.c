#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[20];
    char pass[20];
    int i;
    int found = 0;

    printf("Pls Enter UserName: \n");
    scanf("%s", name);

    printf("Enter Password \n");
    scanf("%s", pass);

    int len = strlen(pass);
    if (len < 8) {
        printf("Password is incorrect.");
        return 0;
    }

    for (i = 0; i < len; i++) {
        if (pass[i] == '#' || pass[i] == '@') {
            found = 1;
            break;
        }
    }

    if (found != 1) {
        printf("THe password Is Incorrect ! ");
        return 0;
    }

    char newname[20];
    for (i = 0; name[i] != '\0'; i++) {
        newname[i] = tolower(name[i]);
    }
    newname[i] = '\0';

    if (strcmp(newname, pass) == 0) {
        printf("password Is Invalid ; TryAgain");
        return 0;
    } else {
        printf("Correct password Entered");
    }

    return 0;
}
