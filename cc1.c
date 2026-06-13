#define METHOD1
#define METHOD2
int main()
{
#ifdef METHOD1
		puts("Hello World");
#endif
#ifdef METHOD2
		printf("Hello World");
#endif
#if defined METHOD1 && defined METHOD2
		puts("Hello World");
		printf("Hello World");
#endif

		return 0;
}
