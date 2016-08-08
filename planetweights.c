/* 

How much would I weigh on different planets, in pounds?

To do this, we will multiply by the ratio of graviational accelerations. See
http://math.stackexchange.com/questions/529264/if-i-weigh-250-lbs-on-earth-how-much-do-i-weigh-on-the-moon

*/

#include <stdio.h>

int main(int argc, char** argv) {


    int p;
    float weightEarth,weight,ratio;

    /* Use arrays to define planets and corresponding ratios */
    const char* names[] = {"Earth","Jupiter","Mars", "Mercury","Moon","Neptune",
                            "Pluto","Saturn","Sun","Uranus","Venus"};

    float ratios[] = {1.0,2.364,0.377, 0.378,0.166,1.125,
                     0.067,1.064,27.072,0.889,0.907};

    /* Get the user's weight */
    puts("Please enter your weight in pounds: ");
    scanf("%f", &weightEarth);


    /* Check here if > 0 */  
    if (weightEarth < 0) {
        printf("Weight must be positive number!");
        return 1;
    }

    for(p = 0; p < 10; p++) {

        weight = weightEarth * ratios[p];
        printf("Your weight on %s is %.2f pounds.\n", names[p],weight);

    }

    return 0;
}
