#include <stdio.h>

#if 0
int main()
{
		unsigned char iter = 0xFF;
		int count;

		for (count = 0; iter != 0; iter >>= 1)
		{
				if (iter & 01)
				{
						count++;
				}
		}
		printf("Count : %d\n", count);
		return 0;
}
#endif

#if 0
int main()
{
		char iter = 0xFF;
		int count;

		for (count = 0; iter != 0; iter >>= 1)
		{
				if (iter & 01)
				{
						count++;
				}
		}
		printf("Count : %d\n", count);
		return 0;
}
#endif

#if 0
int main()
{
		char iter = 0x55;
		int count;

		for (count = 0; iter != 0; iter >>= 1)
		{
				if (iter & 01)
				{
						count++;
				}
		}
		printf("Count : %d\n", count);
		return 0;
}
#endif

#if 0
int main()
{
		char iter = 0x75;
		int count;

		for (count = 0; iter != 0; iter >>= 1)
		{
				if (iter & 01)
				{
						count++;
				}
		}
		printf("Count : %d\n", count);
		return 0;
}
#endif

#if 0
int main()
{
		char iter = 0x7A;
		int count;

		for (count = 0; iter != 0; iter >>= 1)
		{
				if (iter & 01)
				{
						count++;
				}
		}
		printf("Count : %d\n", count);
		return 0;
}
#endif

#if 1
int main()
{
		int x = 7, y = 7;
		x = 7 << 32;
		printf("x : %d\n", x);
		x = y << 32;
		printf("x : %d\n", x);
		return 0;
}
#endif













