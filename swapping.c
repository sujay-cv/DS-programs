#include <stdio.h>
int main() {
char str1[] = "Girish";
char str2[] = "PavanTejas";
char ch;
int index = 0;
//Character by Character approach
printf("Before Swapping - \n");
printf("Value of str1 - %s \n", str1);
printf("Value of str2 - %s \n", str2);
while(str1[index] != '\0') {
ch = str1[index];
str1[index] = str2[index];
str2[index] = ch;
index++;
}
printf("After Swapping - \n");
printf("Value of str1 - %s \n", str1);
printf("Value of str2 - %s \n", str2);
return 0;
}
