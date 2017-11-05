#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *primesort;
    primesort = popen("sort -n -r", "w");
    int input = 0;
    
    while (input != -1) {
        scanf ("%d", &input);
        
        if (input == 0 || input == 1) {
            fprintf(primesort,"%d\n", input);
        } else if (input >= 4) {
            for (int i = 2; i <= input/2; i++) {
                if (input % i == 0) {
                    fprintf(primesort,"%d\n", input)
                    break;
                }
            }
        }
    }
    pclose(primesort);
    return 0;
}
