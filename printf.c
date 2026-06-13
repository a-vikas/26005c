#include <stdio.h>

#if 0
int main()
{
		char a[] = "Emertxe";
		printf(a);
		return 0;
}
#endif

#if 0
int main()
{
		printf("80%%\n");
		printf("80%c\n", '%');
		return 0;
}
#endif

#if 0
int main()
{
		printf("Hello world\rVikas\n");
		return 0;
}
#endif

#if 0
int main()
{
		int num1 = 123;
		char ch = 'A';
		float num2 = 12.345;
		char str[] = "Hello World";

		printf("%d %c %f %s\n", num1, ch, num2, str);
		printf("%+05d\n", num1);
		printf("%.2f %.5s\n", num2, str);
		return 0;
}
#endif

#if 0
int main()
{
		int ret;
		char str[] = "Hello World";
		ret = printf("%s\n", str);
		printf("Previous printf printed %d characters\n", ret);
		return 0;
}
#endif

#if 0
int main()
{
		printf("%d\n", printf("Vikas\n"));
		return 0;
}
#endif

#if 0
int main()
{
		printf("%d %d\n", printf("Emertxe\n"), printf("Vikas\n"));
		return 0;
}
#endif

#if 0
int main()
{
		if (!printf("Hello ")) 
		{
				printf("Hello ");
		}
		else
		{
				printf("World\n");
		}
		return 0;
}
#endif

#if 0
int main()
{
		int num1 = 123;
		char ch = 'A';
		float num2 = 12.345;
		char str[] = "Hello World";
		char str2[100];
		sprintf(str2, "%d %c %f %s\n", num1, ch, num2, str);
		printf("%s", str2);
		return 0;
}
#endif

#if 1
int main()
{
		int ret;
		int num1;
		char ch;
		float num2;
		char str[50];
		ret = scanf("%d %c %f %s", &num1, &ch, &num2, str);
		printf("%d %c %f %s\n", num1, ch, num2, str);
		printf("Scanf return %d\n", ret);
		return 0;
}
#endif













