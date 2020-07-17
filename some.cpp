#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {



int count=0;
int argv_c=1;
FILE *fp;
short n[1], i;
int F_num,S_num ;
int HXF_num,HXS_num;

while(count<2){

fp = fopen(argv[argv_c], "rb");

fread(n, sizeof(short), 1, fp);



for(i=0; i<1; i++){

	if(argv_c<2)
	{
 	F_num = n[0];
	}
//printf("%d (0x%x)",F_num,n[0]);
	else
	S_num = n[0];


}
fclose(fp);

count+=1;
argv_c+=1;

}

printf("%d (0x%x) + %d (0x%x) = %d (0x%x)",F_num,F_num,S_num,S_num,F_num+S_num,F_num+S_num);
return 0;
}
