#include<stdio.h>
int main()
{
	int n,original_integer,reverse_integer=0,remainder;
	printf("\n Enter any integer");
	scanf("%d",&n);
	n=original_integer;
	while(n!=0)
	{
		remainder=remainder%10;
		reverse_integer=reverse_integer*10+remainder;
		n=remainder/10;
	}
	if(original_integer=reverse_integer)
	{
		printf("\n %d:integer is palindrome");
	}
	else
	{
		printf("\n %d:integer is not palindrome");
	}

}
