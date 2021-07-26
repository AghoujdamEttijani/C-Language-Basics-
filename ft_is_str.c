// this function check is the string is in the base or not,if is exist the function return the length of str

#include<stdio.h>
#include<stdlib.h>
int     ft_is_str(char *str, char *base)
{
    int i;
    int j;

    i = 0;
    while(str[i] != '\0')
    {
        j = 0;
        while(base[j])
        {
            if (str[i] == base[j])
                break;
            j++;
            if(!(base[j]))
                return (0);
        }
        i++;
    }
    return (i);
}

int     main(int av, char **ac)
{
    if (av != 3)
        return (1);
    printf("%d \n", ft_is_str(ac[1], ac[2]));

    return (0);
}