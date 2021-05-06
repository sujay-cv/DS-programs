#include <stdio.h>
int main() {
char str1[] = "Girish"; // String 1
char str2[8]; // Variable to store reverse string
int length = 0;
int length2 = 0;
while(str1[length] != '\0') {
length2++;
}
printf("\nPrinting in reverse - ");
for(length2 = --length; length2>=0; length2--)
printf("%c", str1[length2]);
length2 = 0;
printf("\nStoring in reverse - ");
while(length >= 0) {
str2[length] = str1[length2];
length--;
length2++;
}
str1[length2] = '\0'; // Terminates the string
printf("%s\n", str2);
return 0;
}
