#include <stdio.h>
#include <math.h>

int count = 0;
int extra_5_count = 0;
int cal_5(int n)
{

    count = 0;
    while (n > 0)
    {
        if (n % 5 == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        n /= 5;
    }
    extra_5_count += count;
    return count;
}

int main()
{
    int cases = 1, caseno;
    //scanf("%d", &cases);

    int zeroes, result = 0, i, j, k, temp_res = 0, max = 0;
    for (caseno = 1; caseno <= cases; ++caseno)
    {

        //scanf("%d", &zeroes);
        zeroes = 100000000;
        result = 0;
        temp_res = 0;
        extra_5_count = 0;
        max = 0;
        for (i = 5; result <= zeroes; i += 5)
        {
            result += 4 + cal_5(i) + 1;
            if (cal_5(i) > max)
            {
                printf("%d--%d--%d--%d--%d\n", i, result, temp_res, extra_5_count, cal_5(i));
                max = cal_5(i);
            }

            if (result >= zeroes)
            {
                if (result == zeroes)
                {
                    printf("Case %d: %d\n", caseno, 5 * (zeroes - extra_5_count));
                }
                else
                {
                    if (zeroes > temp_res + 4 && zeroes < result)
                    {
                        printf("Case %d: impossible\n", caseno);
                    }
                    else
                    {
                        printf("Case %d: %d\n", caseno, 5 * (zeroes - (result - cal_5(i) - i)));
                    }
                }

                break;
            }
            temp_res = result;
        }
    }
    return 0;
}
