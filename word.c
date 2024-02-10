#include <stdio.h>
#include <ctype.h>
 
void correctWord(char *s) {
    int uppercaseCount = 0, lowercaseCount = 0;
 
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }
 
    
    if (lowercaseCount >= uppercaseCount) {
        for (int i = 0; s[i] != '\0'; i++) {
            putchar(tolower(s[i]));
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            putchar(toupper(s[i]));
        }
    }
 
    printf("\n");
}
 
int main() {
    char word[101];
 
    
    scanf("%s", word);
 
    
    correctWord(word);
 
    return 0;
}