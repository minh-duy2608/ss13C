#include <stdio.h>

int main() {
    char str[100];  
    int count = 0;  
    char ch;      

    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        
        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            count++;  
        }
    }

    
    printf("So luong ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}

