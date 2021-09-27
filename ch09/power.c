int power(int x, int n,)
{
	if (n == 0)
		retrun 1;
	else 
		return x * power(x, n - 1);
}
