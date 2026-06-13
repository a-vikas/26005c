#include <stdio.h>

#if 0
int main()
{
		int h, m, s;
		scanf("%d%*c%d%*c%d", &h, &m, &s);
		printf("%d:%d:%d\n", h, m, s);
		return 0;
}
#endif

#if 0
int main()
{
		int n1, n2, n3, sum;
		scanf("%d%*c%d%*c%d", &n1, &n2, &n3);
		sum = n1 + n2 + n3;
		printf("Sum : %d\n", sum);
		return 0;
}
#endif

#if 0
int main()
{
		char name[50];
		scanf("%[a-z A-Z]", name);
		printf("%s\n", name);
		return 0;
}
#endif

#if 0
int main()
{
		char id[50];
		scanf("%[0-9]", id);
		printf("%s\n", id);
		return 0;
}
#endif

#if 0
int main()
{
		char name[50];
		scanf("%[^x]", name);
		printf("%s\n", name);
		return 0;
}
#endif

#if 0
int main()
{
		int num = 100, ret;
		printf("Enter the Number : ");
		ret = scanf("%d", &num);
		printf("ret : %d\n", ret);
		if (ret != 1)
		{
				printf("Invalid Input\n");
				printf("Num : %d\n", num);
		}
		else
		{
				printf("New value : %d\n", num);
		}
		return 0;
}
#endif

#if 1
int main()
{
		char arr1[10], arr2[10];
		int age;
		sscanf("Hi I am 30 yrs old", "%s %s %d", arr1, arr2, &age);
		sscanf("Hi I am 30 yrs old", "%*s %*s %d", &age);
		printf("%s\n", arr1);
		printf("%s\n", arr2);
		printf("Ok You are %d years old\n", age);
		return 0;
}
#endif











