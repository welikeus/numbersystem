#include <stdio.h>

int hightolow(char *in, int insystem, char *out, int outsystem)
{
    if (insystem == 10) {
        int value = atoi(in);
        char *save;
        if (outsystem == 2) {
            for (int i = 0; (value / 2) == 0; i++, value /= 2) {
                save[i] = (value % 2) + '0';
            }
            save[i] = (value % 2) + '0';
            save[i+1] = '\0';
            for (int j = 0; i >= 0; j++, i--) {
                out[j] = save[i];
            } 
            out[j] = '\0';
            return 0;
        } else if (outsystem == 8) {
            for (int i = 0; (value / 8) == 0; i++, value /= 8) {
                save[i] = (value % 8) + '0';
                
            }
            save[i] = (value % 8) + '0';
            save[i+1] = '\0';
            for (int j = 0; i >= 0; j++, i--) {
                out[j] = in[i];
            }
            out[i] = '\0';
            return 0;
        }
    }
   return -1;
}