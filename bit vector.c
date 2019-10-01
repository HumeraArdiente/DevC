#include <stdio.h>
#define MAX 8



int main(void)
{
	int L, A[MAX], x, y = 0;
	
	printf("Enter a number : ");
	scanf("%d", &L);
	system("cls");
	
	for(x = 128; x > 0; x /= 2){
		A[y++] = (L & x)?1:0;
	}
	
	printf("Number\t: %d\nBit\t: ", L);
	for(x = 0; x < MAX; x++){
		printf("%d", A[x]);
		if(x == 3){
			printf(" ");
		}
	}
	
	return 0;
}
