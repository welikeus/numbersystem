#include <stdio.h>

int hightolow(char *in, int insystem, char *out, int outsystem)
{
    if (insystem == 10) {
        if (outsystem == 2 || outsystem == 8) {
            int value = atoi(in);
            char *save;
            for (int i = 0; (value / outsystem) == 0; i++, value /= outsystem) {
                save[i] = (value % outsystem) + '0';
            }
            save[i] = (value % outsystem) + '0';
            save[i+1] = '\0';
            for (int j = 0; i >= 0; j++, i--) {
                out[j] = save[i];
            } 
            out[j] = '\0';
            return 0;
        }
    }
   return -1;
}