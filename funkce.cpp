
#include <stdio.h>
//vypisuje tecky :O
void tecka(int kolik)
{
	for (int i = 0; i < kolik; i++) {
		printf(".");
	}
	printf("\n");
}

//funkce soucet
void soucet(int x, int y)
{
  printf("soucet %d + %d je: %d", x, y, x + y);
}

//funkce mocnina
long mocnina(long x)
{
	return x * x;
}

//funkce faktorial
long long faktorial(int x)
{
	long long hodnota = 1;
	for (int i = x; i > 1; i--) {
		hodnota *= i;
	}
	return hodnota;
}

//funkce absolutní hodnota
int abs(int a)
{
	if (a < 0) a *= -1;
	else return a;
}

//funkce ciferný součet



int main()
{
	tecka(5);
	soucet(7, 15);
	printf("\nmocnina 5 je: %d", mocnina(5));
	long long vysledek = faktorial(18);
	printf("Faktorial 18 je: %lld", vysledek);
	printf("absolutni cislo z 3: %d, abs. z -3: %d", abs(3), abs(-3));
}


 