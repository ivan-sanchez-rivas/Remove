#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
char buf;
int source, target, n;
if(argc!=2)
{
printf("Error");
}
else
{
source = open(argv[1],O_RDONLY);
if(source == -1)
{
printf("Error");
}
close(source);
remove(argv[1]);
}
return 0;
}


