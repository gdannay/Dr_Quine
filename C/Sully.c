#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
int	main()
{
	int i = 5;
	char file[11]; char com[51]; char name[9];
	char *a = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <strings.h>%c#include <unistd.h>%cint%cmain()%c{%c%cint i = %d;%c%cchar file[11]; char com[51]; char name[9];%c%cchar *a = %c%s%c;%c%csprintf(file, %cSully_%%d.c%c, i - 1); sprintf(name, %cSully_%%d%c, i - 1);%c%cint fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH); dprintf(fd, a, 10, 10, 10, 10, 10, 9, 10, 10, 9, i - 1, 10, 9, 10, 9, 34, a, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10); close(fd);%c%csprintf(com, %cclang -Wall -Werror -Wextra %%s -o %%s%c, file, name); system(com); sprintf(file, %c./%%s%c, name); if (i > -1) system(file);}%c";
	sprintf(file, "Sully_%d.c", i - 1); sprintf(name, "Sully_%d", i - 1);
	int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH); dprintf(fd, a, 10, 10, 10, 10, 10, 9, 10, 10, 9, i - 1, 10, 9, 10, 9, 34, a, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10); close(fd);
	sprintf(com, "clang -Wall -Werror -Wextra %s -o %s", file, name); system(com); sprintf(file, "./%s", name); if (i > 0) system(file);}
