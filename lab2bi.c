#include <stdlib.h>
#include <stdio.h>
// functie recursiva la infinit,trebuie ori sa adaugam o conditie de iesire/eleiminam recursivitatea
int function(int x)
{
	x = x - 2;
	return x;
}

int main()
{
	int a = 30, i = 0;

	while (a > 0)
	{
		a = function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}
