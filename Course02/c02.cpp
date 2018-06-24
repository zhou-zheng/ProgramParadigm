#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	float f = 7.0;
	short s = *(short *)&f;
	unsigned char *pf = (unsigned char *)&f;

	printf("%p=%02x,%p=%02x,%p=%02x,%p=%02x\n", &pf[0], pf[0], &pf[1], pf[1], &pf[2], pf[2], &pf[3], pf[3]);
	printf("f = %f(%p), s = %d(%p)\n", f, &f, s, &s);
	
    return 0;
}