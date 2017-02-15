#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j = 0;
    char str[256] = {0};
    char dest[512] = {0};
    int len;

    if(argc < 2)
        len = 16;
    else
        len = atoi(argv[1]);

    for(i=0; i<len; i++){
        dest[i] = i;
    }

    for(i=0; i<len; i++){
        if(j > sizeof(str)-5)
            break;

        sprintf(&str[j], "%02x ", dest[i]);
        j += 3;
        if((i+1)%8 == 0 && i != 0){
            sprintf(&str[j-1], "\n");
        }
    }

    printf("%s\n", str);

}
