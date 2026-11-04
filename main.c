#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*double_content(void *content)
{
	int	*new;

	new = malloc(sizeof(int));
	if (!new)
		return (NULL);
	*new = (*(int *)content) * 2;
	return (new);
}

void	del(void *content)
{
	free(content);
}

void	print_content(void *content)
{
	printf("%d -> ", *(int *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew(malloc(sizeof(int)));
	n2 = ft_lstnew(malloc(sizeof(int)));
	n3 = ft_lstnew(malloc(sizeof(int)));

	*(int *)n1->content = 10;
	*(int *)n2->content = 20;
	*(int *)n3->content = 30;

	n1->next = n2;
	n2->next = n3;
	lst = n1;

	new_lst = ft_lstmap(lst, double_content, del);

	printf("Original: ");
	ft_lstiter(lst, print_content);
	printf("NULL\n");

	printf("New list: ");
	ft_lstiter(new_lst, print_content);
	printf("NULL\n");

	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}