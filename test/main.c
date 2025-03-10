/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:44:48 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/10 12:45:24 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    printf("----- TEST ft_isalpha -----\n");
    printf("'A' -> %d | 'z' -> %d | '1' -> %d\n", ft_isalpha('A'), ft_isalpha('z'), ft_isalpha('1'));
    printf("\n----- TEST ft_isdigit -----\n");
    printf("'5' -> %d | 'A' -> %d\n", ft_isdigit('5'), ft_isdigit('A'));
    printf("\n----- TEST ft_isalnum -----\n");
    printf("'A' -> %d | '5' -> %d | '#' -> %d\n", ft_isalnum('A'), ft_isalnum('5'), ft_isalnum('#'));
    printf("\n----- TEST ft_isascii -----\n");
    printf("'A' -> %d | 200 -> %d\n", ft_isascii('A'), ft_isascii(200));

    printf("\n----- TEST ft_isprint -----\n");
    printf("'A' -> %d | 31 -> %d\n", ft_isprint('A'), ft_isprint(31));

    printf("\n----- TEST ft_strlen -----\n");
    printf("\"Hello\" -> %zu\n", ft_strlen("Hello"));

    printf("\n----- TEST ft_memset -----\n");
    char buffer[10];
    ft_memset(buffer, 'A', 5);
    buffer[5] = '\0';
    printf("Memset: %s\n", buffer);

    printf("\n----- TEST ft_bzero -----\n");
    char buf[5] = "test";
    ft_bzero(buf, 4);
    printf("Bzero: %s\n", buf);

    printf("\n----- TEST ft_memcpy -----\n");
    char src[] = "CopyMe";
    char dest[10];
    ft_memcpy(dest, src, 7);
    printf("Memcpy: %s\n", dest);

    printf("\n----- TEST ft_memmove -----\n");
    char move[] = "OverlapTest";
    ft_memmove(move + 2, move, 5);
    printf("Memmove: %s\n", move);

    printf("\n----- TEST ft_strlcpy -----\n");
    char dst[10];
    size_t len = ft_strlcpy(dst, "Hello", 10);
    printf("Strlcpy: %s (Len: %zu)\n", dst, len);

    printf("\n----- TEST ft_strlcat -----\n");
    char cat[20] = "Hi ";
    len = ft_strlcat(cat, "there!", 20);
    printf("Strlcat: %s (Len: %zu)\n", cat, len);

    printf("\n----- TEST ft_toupper -----\n");
    printf("'a' -> %c | 'Z' -> %c\n", ft_toupper('a'), ft_toupper('Z'));

    printf("\n----- TEST ft_tolower -----\n");
    printf("'A' -> %c | 'z' -> %c\n", ft_tolower('A'), ft_tolower('z'));

    printf("\n----- TEST ft_strchr -----\n");
    printf("'l' in \"Hello\": %s\n", ft_strchr("Hello", 'l'));

    printf("\n----- TEST ft_strrchr -----\n");
    printf("'l' in \"Hello\": %s\n", ft_strrchr("Hello", 'l'));

    printf("\n----- TEST ft_strncmp -----\n");
    printf("\"abc\" vs \"abd\" (2): %d\n", ft_strncmp("abc", "abd", 2));

    printf("\n----- TEST ft_memchr -----\n");
    printf("'l' in \"Hello\": %s\n", (char*)ft_memchr("Hello", 'l', 5));

    printf("\n----- TEST ft_memcmp -----\n");
    printf("\"Hello\" vs \"Hello\": %d\n", ft_memcmp("Hello", "Hello", 5));

    printf("\n----- TEST ft_strnstr -----\n");
    printf("\"lo\" in \"Hello\": %s\n", ft_strnstr("Hello", "lo", 5));

    printf("\n----- TEST ft_atoi -----\n");
    printf("\"42\" -> %d | \"-42\" -> %d\n", ft_atoi("42"), ft_atoi("-42"));

    printf("\n----- TEST ft_calloc -----\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr) {
        printf("Calloc success!\n");
        free(arr);
    }

    printf("\n----- TEST ft_strdup -----\n");
    char *dup = ft_strdup("DuplicateMe");
    printf("Strdup: %s\n", dup);
    free(dup);

    return 0;
}
