#include <stdio.h>
#include <string.h>

void strupr(char *s);

int main() {
    char a[100];
    printf("please input a number string:\n");
    fgets(a, 100, stdin);
    strupr(a);

    printf("%s", a);

}

void strupr(char *s) {
    while (*s++ != '\0')
    {
        *s = toupper(*s);
    }
    
}