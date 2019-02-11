int main()
{
   int n, a = 0, b = 1, temp, i;
 
   scanf("%d",&n);
  
   for ( i= 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         temp = i;
      else
      {
         next = a + b;
         a = b;
         b = temp;
      }
      printf("%d\n",temp);
   }
 
   return 0;
}
