#include <stdio.h>

#if 0
int main()
{
		printf("Program : %s, ", __FILE__);
		printf("was compiled on %s at %s, ", __DATE__, __TIME__);
		printf("from function : %s, ", __func__);
		printf("at the line Number : %d\n", __LINE__);
		return 0;
}
#endif

#if 0
#define SET_BIT(num, pos) 	num | (1 << pos)

int main()
{
		printf("%d\n", 2 * SET_BIT(0, 2));
		return 0;
}
#endif

#if 0
#define SET_BIT(num, pos) 	(num | (1 << pos))

int main()
{
		printf("%d\n", 2 * SET_BIT(0, 2));
		return 0;
}
#endif

#if 1
#define WARN_IF(EXP)	\
		do				\
{						\
		x--;			\
		if (EXP)		\
		fprintf(stderr, "Warning " #EXP "\n");\
} while (x);

int main()
{
		int x = 5;
		WARN_IF(x == 0);
		return 0;
}
#endif




