
// how are you in this tutorial we learn how we can progrmming our tolower()
// function in c language.......

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char    *ft_strlowcase(char *str)// function return an attay fo caracters....
{
    int     i;

    if(!(*str))  // if no string declarde or taked by our function
        return (0);
    i = 0;
    while(str[i] != '\0' && (str[i] >= 'A' && str[i] <= 'Z')) // the caracater taking it will be between A and Z
    {
        str[i] = str[i] + 32; // difference between lower case and upper case is 32 in decimal conversion
        i++;
    }
    return (str); // function return the string afetr conversion to lower 
    // we compiling and execting this code and say the output lets experiment i.....>
}

int     main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    printf("%s\n", ft_strlowcase(argv[1])); // our function building in this totu ....
    printf("%s\n", tolower(argv[1])); // c funtion name

    return (0);
}