#include <stdio.h>

#if 0
#define SQUARE(x)  x * x
int main()
{
		printf("%d\n", SQUARE(5));
		return 0;
}
#endif

#if 0
#define SQUARE(x)  x * x
int main()
{
		printf("%d\n", SQUARE(3 + 2));
		return 0;
}
#endif

#if 1
#define SQUARE(x)  (x) * (x)
int main()
{
		printf("%d\n", SQUARE(3 + 2));
		return 0;
}
#endif

