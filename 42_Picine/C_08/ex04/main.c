
#include "ft_stock_str.h"

int	main(void)
{
	t_stock_str	*stock;
	char		*strs[] = {"a", "b", "c"};

	stock = ft_strs_to_tab(3, strs);
	printf("%s,%d,%s",
		stock[0].str,
		stock[1].size,
		stock[2].copy);
}
