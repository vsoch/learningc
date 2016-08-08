/* Convert kilometers to miles, but just asking user for one input! 
*/

#include <stdio.h>
#include <stdlib.h>

/* Convert from kilometers to miles */
float doConversion(float kilometers) {
    return(kilometers * 0.621371);
}

/* print table for miles = 0,1,2,3 ... 30 */
void makeTable(){

    float start,end,by;
    float miles,kilometers;

    start = 0.0;
    end = 20.0;
    by = 1.0;

    kilometers = start;

    printf("\nKMs\tMILES\n");
    while(kilometers <= end)
    {
        miles =  doConversion(kilometers);
        printf("%.1f\t%.2f\n",kilometers,miles);
        kilometers = kilometers + by;
    }

}

int main(int argc, char *argv[]) {


    if (argc==1) {

        /* If no argument supplied, print a table*/
        makeTable();
        return 0;

    } else {

        float kilometers,miles;
        kilometers = atof(argv[1]);
        miles = doConversion(kilometers);
        printf("\n%.2f kilometers is %.2f miles.\n",kilometers,miles);
    }

    return 0;
}
