#include "types.h"
#include "user.h"
int
main(int argc, char *argv[])
{
	int i;
	if(argc < 2){
		ps(0);
	} else {
        ps(atoi(argv[1]));
    }
	exit();
}
