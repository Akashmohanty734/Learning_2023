//Convert string as a integer

#include <stdio.h>
#include <string.h>

int main() {
  char num[50];
  int  i, len;
  int result = 0;
  
  printf("Enter a number string: ");
  gets(num);
  len = strlen(num);

	for(i=0; i<len; i++){
		result = result * 10 + ( num[i] - '0' );     //ASCII value of 0-9 is 48-57
	}

	printf("%d", result);
  return 0;
}


//  we can also use atoi()   int num = atoi(str);
