#include "libft.h"
#include <stdint.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

static int	check(const char *name, const char *s, unsigned int start,
				size_t len, const char *expected)
{
	char	*got;
	int		ok;

	got = ft_substr(s, start, len);
	if (expected == NULL)
		ok = (got == NULL);
	else
		ok = (got != NULL && strcmp(got, expected) == 0);
	if (ok)
		printf("[OK]   %s\n", name);
	else
		printf("[FAIL] %s (expected %s%s%s, got %s%s%s)\n", name,
			expected ? "\"" : "", expected ? expected : "NULL",
			expected ? "\"" : "",
			got ? "\"" : "", got ? got : "NULL", got ? "\"" : "");
	free(got);
	return (!ok);
}

int	main(void)
{
	char	str[] = "Hello, 42 School!";
	int		fails;

	fails = 0;
	fails += check("middle", str, 7, 2, "42");
	fails += check("from start", str, 0, 5, "Hello");
	fails += check("whole string", str, 0, strlen(str), str);
	fails += check("last char", str, 16, 1, "!");
	fails += check("len longer than remaining", "Hello", 2, 100, "llo");
	fails += check("len = 0", str, 3, 0, "");
	fails += check("start == strlen", "Hello", 5, 3, "");
	fails += check("start past end", str, 100, 5, "");
	fails += check("empty source string", "", 0, 5, "");
	fails += check("len = SIZE_MAX", "Hello", 1, SIZE_MAX, "ello");
	fails += check("s is NULL", NULL, 0, 5, NULL);
	if (fails == 0)
		printf("\nAll tests passed.\n");
	else
		printf("\n%d test(s) failed.\n", fails);
	return (fails != 0);
}