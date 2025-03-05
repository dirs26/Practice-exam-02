int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return 0;
	int max_v = tab[0];
	for (unsigned int i = 1; i < len; i++)
	{
		if(tab[i] >  max_v)
		max_v = tab[i];
	}
	return max_v;
}