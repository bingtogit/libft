#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

static void	test(char const *s, char c)
{
	char	**res;
	int		i;

	printf("Input: \"%s\" | delimiter: '%c'\n", s ? s : "(NULL)", c);
	res = ft_split(s, c);
	if (!res)
	{
		printf("  -> NULL\n\n");
		return ;
	}
	i = 0;
	while (res[i])
	{
		printf("  [%d] \"%s\"\n", i, res[i]);
		free(res[i]);
		i++;
	}
	printf("  [%d] NULL\n\n", i);
	free(res);
}

int	main(void)
{
	test("hello world", ' ');
	test("  hello   world  ", ' ');
	test("one,two,,three", ',');
	test("nodelimiter", ' ');
	test("", ' ');
	test("     ", ' ');
	test(",,,a,,,b,,,", ',');
	test("a", 'a');
	test(NULL, ' ');
	return (0);
}