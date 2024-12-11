#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0'){
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }
    printf("Chuoi ban nhap la: %s\n", str);
    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("Do dai cua chuoi la: %d\n", i);
    
    return 0;
}
