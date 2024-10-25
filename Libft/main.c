// main.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h" 

void test_ft_strlen();
void test_ft_strcpy();
void test_ft_strcmp();
void test_ft_atoi();
void test_ft_isalpha();
void test_ft_isdigit();
void test_ft_isalnum();
void test_ft_isascii();
void test_ft_isprint();
void test_ft_toupper();
void test_ft_tolower();


int main() {
    test_ft_strlen();
    test_ft_strcpy();
    test_ft_strcmp();
    test_ft_atoi();
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    

    printf("Fin de las pruebas\n");
    return 0;
}


void test_ft_strlen() {
    char *str = "Hello, World!";
    size_t len = ft_strlen(str);
    if (len == strlen(str)) {
        printf("ft_strlen: OK\n");
    } else {
        printf("ft_strlen: Error\n");
    }
}
void test_ft_strcpy() {
    char dest[100];
    const char *src = "Hello, World!";
    ft_strlcpy(dest, src, sizeof(dest));
}

void test_ft_strcmp() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    if (ft_strncmp(str1, str2, 5) == strcmp(str1, str2)) {
        // Your code here
    }
}

// void test_ft_strcpy() {
//     char src[] = "Hello, World!";
//     char dest[50];
//     ft_strcpy(dest, src);
//     if (strcmp(dest, src) == 0) {
//         printf("ft_strcpy: OK\n");
//     } else {
//         printf("ft_strcpy: Error\n");
//     }
// }

// void test_ft_strcmp() {
//     char *str1 = "Hello";
//     char *str2 = "Hello";
//     if (ft_strcmp(str1, str2) == strcmp(str1, str2)) {
//         printf("ft_strcmp: OK\n");
//     } else {
//         printf("ft_strcmp: Error\n");
//     }
// }

void test_ft_atoi() {
    char *str = "12345";
    if (ft_atoi(str) == atoi(str)) {
        printf("ft_atoi: OK\n");
    } else {
        printf("ft_atoi: Error\n");
    }
}

void test_ft_isalpha() {
    if (ft_isalpha('A') == isalpha('A') && ft_isalpha('1') == isalpha('1')) {
        printf("ft_isalpha: OK\n");
    } else {
        printf("ft_isalpha: Error\n");
    }
}

void test_ft_isdigit() {
    if (ft_isdigit('0') == isdigit('0') && ft_isdigit('A') == isdigit('A')) {
        printf("ft_isdigit: OK\n");
    } else {
        printf("ft_isdigit: Error\n");
    }
}

void test_ft_isalnum() {
    if (ft_isalnum('A') == isalnum('A') && ft_isalnum('1') == isalnum('1') && ft_isalnum('!') == isalnum('!')) {
        printf("ft_isalnum: OK\n");
    } else {
        printf("ft_isalnum: Error\n");
    }
}

void test_ft_isascii() {
    if (ft_isascii('A') == isascii('A') && ft_isascii(128) == isascii(128)) {
        printf("ft_isascii: OK\n");
    } else {
        printf("ft_isascii: Error\n");
    }
}

void test_ft_isprint() {
    if (ft_isprint('A') == isprint('A') && ft_isprint(31) == isprint(31)) {
        printf("ft_isprint: OK\n");
    } else {
        printf("ft_isprint: Error\n");
    }
}

void test_ft_toupper() {
    if (ft_toupper('a') == toupper('a') && ft_toupper('A') == toupper('A')) {
        printf("ft_toupper: OK\n");
    } else {
        printf("ft_toupper: Error\n");
    }
}

void test_ft_tolower() {
    if (ft_tolower('A') == tolower('A') && ft_tolower('a') == tolower('a')) {
        printf("ft_tolower: OK\n");
    } else {
        printf("ft_tolower: Error\n");
    }
}
