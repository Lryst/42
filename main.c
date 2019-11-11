#include "libft.h"

#include "./ft_ssl/libft/includes/libft.h"
int main()
{
    int strlen_checker = 0;
    if (ft_strlen("a") == strlen("a"))
    {
        strlen_checker++;
        if (ft_strlen("Bonjour") == strlen("Bonjour"))
        {
            strlen_checker++;
            if (ft_strlen("") == strlen(""))
            {
                strlen_checker++;
                if (ft_strlen("123") == strlen("123"))
                {
                    strlen_checker++;
                }
            }
        }
    }
    printf("ft_strlen = %s %s %s %s\n", 
        strlen_checker >= 1 ? " V" : " X",
        strlen_checker >= 2 ? " V" : " X", 
        strlen_checker >= 3 ? " V" : " X", 
        strlen_checker >= 4 ? " V" : " X");
    int strtrim_checker = 0;
    ft_putstr("ft_strtrim = ");
    if (strcmp(ft_strtrim("Bonjour"), "Bonjour") == 0)
    {
        strtrim_checker++;
        ft_putstr(strtrim_checker >= 1 ? " V" : " X");
        if (strcmp(ft_strtrim("    Bonjour"), "Bonjour") == 0)
        {
            strtrim_checker++;
            ft_putstr(strtrim_checker >= 2 ? " V" : " X");
            if (strcmp(ft_strtrim("Bonjour    "), "Bonjour") == 0)
            {
                strtrim_checker++;
                ft_putstr(strtrim_checker >= 3 ? " V" : " X");
                if (strcmp(ft_strtrim("   Bonjour    "), "Bonjour") == 0)
                {
                    strtrim_checker++;
                    ft_putstr(strtrim_checker >= 4 ? " V" : " X");
                    if (strcmp(ft_strtrim("a"), "a") == 0)
                    {
                        strtrim_checker++;
                        ft_putstr(strtrim_checker >= 5 ? " V" : " X");
                        if (strcmp(ft_strtrim("    a"), "a") == 0)
                        {
                            strtrim_checker++;
                            ft_putstr(strtrim_checker >= 6 ? " V" : " X");
                            if (strcmp(ft_strtrim("a    "), "a") == 0)
                            {
                                strtrim_checker++;
                                ft_putstr(strtrim_checker >= 7 ? " V" : " X");
                                if (strcmp(ft_strtrim("  a  "), "a") == 0)
                                {
                                    strtrim_checker++;
                                    ft_putstr(strtrim_checker >= 8 ? " V" : " X");
                                    if (strcmp(ft_strtrim(" a "), "a") == 0)
                                    {
                                        strtrim_checker++;
                                        ft_putstr(strtrim_checker >= 9 ? " V" : " X");
                                        if (strcmp(ft_strtrim("a a"), "a a") == 0)
                                        {
                                            strtrim_checker++;
                                            ft_putstr(strtrim_checker >= 10 ? " V" : " X");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
Collapse







Message Thescriv


