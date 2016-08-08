/* Convert miles to kilometers, because we don't understand the
   metric system   
*/

#include <stdio.h>

/* print table for miles = 0,1,2,3 ... 30 */

int main() {

    float start,end,by;
    float miles,kilometers;

    start = 0.0;
    end = 30.0;
    by = 1.0;

    miles = start;

    printf("\nMILES\tKILOMETERS\n");
    while(miles <= end)
    {
        kilometers =  miles * 1.60934;
        printf("%.1f\t%.2f\n",miles,kilometers);
        miles = miles + by;
    }

    return 0;
}
