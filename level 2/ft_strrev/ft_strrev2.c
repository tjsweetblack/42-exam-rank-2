#include <stdio.h>

char *ft_strrev(char *str) {
    if (str == NULL) {
        return NULL;  // Handle the case when the input is NULL
    }

    char *start = str;
    char *end = str;
    char temp;

    // Move `end` to the last character of the string
    while (*end != '\0') {
        end++;
    }
    end--;  // Adjust to point to the last valid character (not the null terminator)

    // Swap characters from start and end until the pointers meet in the middle
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return str;
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "12345";
    
    printf("Original: hello, Reversed: %s\n", ft_strrev(str1));
    printf("Original: world, Reversed: %s\n", ft_strrev(str2));
    printf("Original: 12345, Reversed: %s\n", ft_strrev(""));
    
    return 0;
}
