#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

#if 0
int main()
{
		char ch;
		for ( ; (ch = getchar()) != EOF; )
		{
				putchar(toupper(ch));
		}
		puts("\nEOF Received\n");
		return 0;
}
#endif

#if 0
int main()
{
		char ch;
		for ( ; (ch = getc(stdin)) != EOF; )
		{
				putc(toupper(ch), stdout);
		}
		puts("\nEOF Received\n");
		return 0;
}
#endif

#if 0
int main()
{
		while (1)
		{
				putc('A', stdout);
				//putc('A', stderr);
				sleep(1);
		}
		return 0;
}
#endif

#if 0
int main()
{
		char str[10];
		puts("Enter the string :");
		gets(str);
		puts(str);
		return 0;
}
#endif

#if 0
int main()
{
		char str[10];
		puts("Enter the string :");
		fgets(str, 10, stdin);
		fputs(str, stdout);
		return 0;
}
#endif

#if 1
int main()
{
		char ch;
		for ( ; (ch = getchar()) != '\n'; )
		{
				putchar(ch);
		}
		printf("\nDone\n");
		return 0;
}
#endif











