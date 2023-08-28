#include <stdio.h>

char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *haystack_ptr = haystack;
        char *needle_ptr = needle;

        while (*needle_ptr && *needle_ptr == *haystack_ptr) {
            needle_ptr++;
            haystack_ptr++;
        }

        if (!*needle_ptr) {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}

int main() {
    char haystack[] = "Hello, world! This is a test.";
    char needle[] = "world";

    char *result = _strstr(haystack, needle);

    if (result) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
