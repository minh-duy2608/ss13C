#include <stdio.h>

int main() {
    char str[100];  
    int count = 0, i = 0;
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] != '\0') {
            count++;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
        }
    }

    printf("So tu trong chuoi: %d\n", count);

    return 0;
}
