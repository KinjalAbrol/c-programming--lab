#include <stdio.h>

int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    // check if the input alphabet is lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // check if the input alphabet is uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluate if the alphabet is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    
    return 0;
}
