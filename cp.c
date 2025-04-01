#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define B 4096

int main(int c, char** v) {
	if(c!=3) return fprintf(stderr, "Usage: %s <src> <dst>\n", v[0]), 1;
	int s= open(v[1], O_RDONLY);
	if(s<0) return perror("cp: open src"), 1;
	int d=open(v[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(d<0) return perror("cp: open dst"), close(s), 1;
	char b[B];
	ssize_t n;
	while ((n=read(s, b, B))>0)
		if (write(d, b ,n)!=n)
			return perror("cp:write"), close(s), close(d), 1;
	close(s);
	close(d);
	return 0;
}


