//  function to convet asccii caracter to integer number : this function take a string
// of caracters and return value or 0 in error case
#include<stdio.h>
#include<stdlib.h>


int   ft_atoi(char *str) // function prototype
{
    int   i; // declaration of increment index in integer type
    int   nbr; // declaration of number in  i store my result of convert operation 
    int   sign; // declaration signed flag if the user input the signed string
    
    nbr = 0; // initialization
    i = 0;  // initialization
    
    sign = 1;  // initialization
    if (str[0] == '-') // we tcheck if the first string is minus
    {
      sign = -1; // convert the signe to negative value to multiply it on return value
      i++; // we increment to second caracter
    }
    while(str[i] != '\0') 
    {
      if ((str[i] - '0') > 9) // we tchecking if the caracter indexing minus zero carter is > 9 we return 0 because the result is out of arangement 0 to 9
        return (nbr * sign);
      nbr = (nbr * 10) + (str[i] - 48);//or nbr = nbr * 10 + str[i] - '0'  
         i++;
    }
    return (nbr * sign);
}

int main(int argc, char **argv) {
  
  if (argc != 2)
      return (1);
  printf("%d\n", ft_atoi(argv[1]));
  printf("%d", atoi(argv[1]));

  return 0;
}