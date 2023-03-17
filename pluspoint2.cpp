#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    while (s[i] != '\0') {
        if (isdigit(s[i])) { // kiem tra xem ky tu co phai la so khong
            count++; // neu la so thi tang bien count len 1
            while (isdigit(s[i])) { // tim den cuoi so trong chuoi
                i++;
            }
        } else {
            i++; // neu khong phai so thi kiem tra ky tu tiep theo
        }
    }

    printf("The number of integers in the string is %d", count);

    return 0;
}

