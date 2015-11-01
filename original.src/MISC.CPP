#include <sys/stat.h>

#include "tok.h"

long getfilelen(int fd)
{
struct stat sb;
	if(fstat(fd,&sb)!=0)return -1;
	return sb.st_size;
}

#ifndef CL
void strupr(char *string)
{
char ch;
	while((ch=*string)){
		if(ch>='a'&&ch<='z')*string=ch-0x20;
		string++;
	}
}
#endif
