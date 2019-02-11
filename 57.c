int main()
{
	int a,n,j=0,b;
	scanf("%d%d",&a,&n);
	while(a)
	{
		b=a%10;
		if(b==n)
		j++;
		a=a/10;
	}
	printf("%d",j);
}
