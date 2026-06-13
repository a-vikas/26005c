#include <stdio.h>
#include <unistd.h>
#include <stdio_ext.h>

#if 0
int main()
{
		printf("Hello");
		return 0;
}
#endif

#if 0
int main()
{
		//setbuf(stdout, NULL);
		while (1)
		{
				printf("Hello");
				fflush(stdout);
				sleep(1);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char ch = 'y';
		while (ch != 'n')
		{
				printf("Enter the data : ");
				scanf(" %c", &ch);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char ch = 'y';
		printf("Enter the string : ");
		while (ch != 'n')
		{
				scanf("%c", &ch);
				//while (getchar() != '\n');
				__fpurge(stdin);
				printf("%c", ch);
		}
		return 0;
}
#endif

#if 1
int main()
{
		while (1)
		{
				fprintf(stdout, "Hello");
				fprintf(stderr, "Vikas");
				sleep(1);
		}
		return 0;
}
#endif










