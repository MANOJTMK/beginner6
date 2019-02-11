int main()
{
	int a,n,c=0,b;
	scanf("%d%d",&a,&n);
	while(a)
	{
		b=a%10;
		if(b==n)
		c++;
		a=a/10;
	}
	if(c==0)
	printf("no");
	else
	printf("yes");
}
