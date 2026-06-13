#include <stdio.h>

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "r");
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "r");
		if (fp == NULL)
		{
				//printf("File Not Exists\n");
				perror("ERROR ");
				return -1;
		}
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "w");
		if (fp == NULL)
		{
				//printf("File Not Exists\n");
				perror("ERROR ");
				return -1;
		}
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "a");
		if (fp == NULL)
		{
				//printf("File Not Exists\n");
				perror("ERROR ");
				return -1;
		}
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "r");
		if (fp == NULL)
		{
				//printf("File Not Exists\n");
				perror("ERROR ");
				return -1;
		}
		char ch;

		while (ch = fgetc(fp))
		{
				if (feof(fp))
						break;
				fputc(ch, stdout);
		}
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp, *fc;
		fp = fopen("text.txt", "r");
		fc = fopen("textcopy.txt", "w");
		if (fp == NULL || fc == NULL)
		{
				//printf("File Not Exists\n");
				perror("ERROR ");
				return -1;
		}
		char ch;

		while (ch = fgetc(fp))
		{
				if (feof(fp))
						break;
				fputc(ch, fc);
		}
		printf("Copied\n");
		fclose(fc);
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "w");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		char ch;
		ch = fgetc(fp);
		if (ferror(fp))
				fprintf(stderr, "Error in Reading from File\n");
	
		//clearerr(fp);
		if (ferror(fp))
				fprintf(stderr, "Error in Reading from File\n");
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "r");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		char ch;
		printf("Offset : %ld\n", ftell(fp));
		while ((ch = fgetc(fp)) != EOF)
		{
				fputc(ch, stdout);
		}
		printf("\nOffset : %ld\n", ftell(fp)); // Size of File
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "r");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		char ch;
		printf("Offset : %ld\n", ftell(fp));
		while ((ch = fgetc(fp)) != EOF)
		{
				if (ch == 'c')
						printf("c is at : %ld\n", ftell(fp));
		}
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "w+");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		int n1, n2;
		char op, str[10];
		float n3;
		fprintf(fp, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
		//rewind(fp);
		fseek(fp, 0, SEEK_SET);
		fscanf(fp, "%d %c %d %s %f", &n1, &op, &n2, str, &n3);
		fprintf(stdout, "%d %c %d %s %f\n", n1, op, n2, str, n3);
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("a.out", "r");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		char ch;
		printf("Offset : %ld\n", ftell(fp));
		fseek(fp, 0, SEEK_END);	// Place the file Indicator at END of the File
		printf("\nOffset : %ld\n", ftell(fp)); // Size of File
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "w+");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		
		int n1, n2, n3, n4;
		scanf("%d %d", &n1, &n2);
		fwrite(&n1, sizeof (n1), 1, fp);
		fwrite(&n2, sizeof (n2), 1, fp);
		rewind(fp);
		fread(&n3, sizeof (n3), 1, fp);
		fread(&n4, sizeof (n4), 1, fp);
		printf("%d %d\n", n3, n4);
		fclose(fp);
		return 0;
}
#endif

#if 0
int main()
{
		FILE * fp;
		fp = fopen("text.txt", "w+");
		if (fp == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		
		int n1, n2, n3, n4;
		scanf("%x %x", &n1, &n2);
		fwrite(&n1, sizeof (n1), 1, fp);
		fwrite(&n2, sizeof (n2), 1, fp);
		rewind(fp);
		fread(&n3, sizeof (n3), 1, fp);
		fread(&n4, sizeof (n4), 1, fp);
		printf("%x %x\n", n3, n4);
		fclose(fp);
		return 0;
}
#endif

#if 0
struct Data
{
		int n1;
		char op;
		int n2;
		char str[10];
		float n3;
};
int main()
{
		struct Data d1 = {2, '+', 1, "is", 1.1};
		struct Data d2;
		FILE *fp;
		fp = fopen("text.txt", "w+");
		if (fp == NULL)
		{
				perror("Error ");
				return -1;
		}
		fwrite(&d1, sizeof (d1), 1, fp);
		rewind(fp);
		fread(&d2, sizeof (d2), 1, fp);
		printf("%d %c %d %s %f\n", d2.n1, d2.op, d2.n2, d2.str, d2.n3);
		fclose(fp);

		return 0;
}
#endif

#if 1
int main()
{
		FILE * fp, *fc;
		fp = fopen("beautiful.bmp", "r");
		fc = fopen("new.bmp", "w");
		if (fp == NULL || fc == NULL)
		{
				perror("ERROR ");
				return -1;
		}
		char ch;

		while (fread(&ch, 1, 1, fp) > 0)				
		{
				fwrite(&ch, 1, 1, fc);
		}
		printf("Copied\n");
		fclose(fc);
		fclose(fp);
		return 0;
}
#endif












