#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *pipe;
	pipe = popen("sort -n -r", "w");
	
	while (int x != -1) {
		scanf ("%d", &x);         
		
		if (x < 2) fprintf(pipe,"%d\n", x);
	  else if (x > 4) {
			for (int i = 2; i <= x/2; i++) {
				if (x % i == 0) fprintf(pipe,"%d\n", x), break;
			}
	  }
  }
	pclose(pipe);
	return 0;
}
