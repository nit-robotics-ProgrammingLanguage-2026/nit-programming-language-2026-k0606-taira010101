#include <stdio.h>

int main(void)
{
    double ylimit;
    const double g = 3.71;
    double v = 0.0;
    double y = 0.0;

    if (scanf("%lf", &ylimit) != 1)
        return 0;
    if (ylimit < 0.0)
    {
        printf("NG");
        return 0;
    }
    for (long long step = 1; y < ylimit; step++)
    {
        double t = step / 10.0;
        v = g * t;
        y = g * t * t / 2.0;
    }
    printf("%.3f", v);
    return 0;
}
