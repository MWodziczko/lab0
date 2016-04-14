#include <iostream>
#include <stdlib.h>
using namespace std;

void fibo(int k);
void even(int k);

int main(int argc, char *argv[])
{
	if(*(argv[2])=='f') fibo(atoi(argv[1]));
	else even(atoi(argv[1]));

}

void fibo(int k)
{
	int *tab=new int[k];
	tab[0]=0; tab[1]=1;
	if(k==1) cout << tab[0];
	else if(k>1)
	{
		cout << tab[0] << "," << tab[1];
		for(int i=2;i<k;i++)
		{
			tab[i]=tab[i-1]+tab[i-2];
			cout << "," << tab[i];
		}
	}
}

void even(int k)
{
	int *tab=new int[k];
	for(int i=0;i<k;i++)
	{
		tab[i]=2*i;
		cout << tab[i] << ",";
	}
}