int	ft_toupper(int ch)
{
	if (ch < 'a' || ch > 'z')
		return (ch);
	return (ch - 32);
}
