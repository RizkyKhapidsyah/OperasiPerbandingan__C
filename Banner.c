#include "RizkyKhapidsyah.h"

inline void BarisJudul(char* B1, char* B2, int J1, int J2)
{
	for (i = 1; i <= J1; i++)
	{
		printf("%s", B1);
	}
		for (i = 1; i <= J2; i++)
		{
			printf("%s", B2);
		}
}

inline void CetakBanner1()
{
	BarisJudul(L_StRp, L_nL, 50, 1);
	BarisJudul(Contoh1, L_nL, 1, 1);
	BarisJudul(L_StRp, L_nL, 50, 1);
}

inline void CetakBanner2()
{
	BarisJudul(L_StRp, L_nL, 50, 1);
	BarisJudul(Contoh2, L_nL, 1, 1);
	BarisJudul(L_StRp, L_nL, 50, 1);
}