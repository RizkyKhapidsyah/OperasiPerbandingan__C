#include "RizkyKhapidsyah.h"
#include "Banner.c"
#include "OperasiPerbandingan2.c"

int main()
{
	int a;
	CetakBanner1();
	a = 5 == 5;
	printf("Isi variabel a: %d \n", a);

	a = 5 != 5;
	printf("Isi variabel a: %d \n", a);

	a = 5 > 5;
	printf("Isi variabel a: %d \n", a);

	a = 5 >= 5;
	printf("Isi variabel a: %d \n", a);

	a = 5 < 5;
	printf("Isi variabel a: %d \n", a);

	a = 5 <= 5;
	printf("Isi variabel a: %d \n\n", a);

	CetakBanner2();
	ContohOperasiPerbandingan2();
	return 0;
}