#include <stdio.h>

int main(){
	char str[100];
	printf("Hay nhap mot chuoi ki tu: ");
	fgets(str,100,stdin);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) { 
            count++;
        }
    }

    printf("so chu cai co trong chuoi vua nhap la: %d\n", count);

    return 0;
}
