#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define FLAGS O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH
#define STRING "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#define FLAGS O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH%c#define STRING %c%s%c%c#define FT(x)int main(){int fd = open(x, FLAGS); dprintf(fd, STRING, 10, 10, 10, 10, 34, STRING, 34, 10, 10, 34, 34, 10, 10, 9, 10, 10); close(fd);}%cFT(%cGrace_kid.c%c)%c/*%c%cThis is a com%c*/%c"
#define FT(x)int main(){int fd = open(x, FLAGS); dprintf(fd, STRING, 10, 10, 10, 10, 34, STRING, 34, 10, 10, 34, 34, 10, 10, 9, 10, 10); close(fd);}
FT("Grace_kid.c")
/*
	This is a com
*/
