#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	int std, ft;
	char *test_cases[] = {"-9223372036854775807", "18446744073709552000", "18446744073709551999", "-0", "++5", "+-5", "--5", "00512", "23058430092136939529", "\t\v\r\n\f -5", "-9223372036854775808", "-9223372036854775809", "9223372036854775808", "9999999999999999999", "2147484160", "6a", "", "2147483648", "-2147483648", "2147483647", "-4294967296", "4294967296", "4294967295"};
	int length = sizeof test_cases / sizeof *test_cases;
	int err_count = 0;

	if (sizeof ft_atoi("") != sizeof atoi(""))
	{
		puts("[\e[91mERR\e[0m]\tYour atoi doesn't return an int\n");
		err_count++;
	}

	for (int i = 0; i < length; i++)
	{
		if ((std = atoi(test_cases[i])) != (ft = ft_atoi(test_cases[i])))
		{
			printf("[\e[91mERR\e[0m]\tTest case:\t\"%s\"\n\tExpected :\t%d\n\tObtained :\t%d\n\n", test_cases[i], std, ft);
			err_count++;
		}
	}

	if (err_count)
		printf("\e[91mTests failed with \e[93m%d\e[91m error(s)\e[0m\n", err_count);
	else
		puts("\e[32mEverything seems to work :)\e[0m");

	return (0);
}
