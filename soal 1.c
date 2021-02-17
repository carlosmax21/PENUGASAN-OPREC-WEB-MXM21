#include <stdio.h>
#include<math.h>
int main()
{
    int input, cnt = 0, num = 2, i, result = 0;
    printf ("input angka: ");
    scanf ("%d", &input);

    while (cnt != input)
    {
        int count = 0;
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cnt++;
            result = num;
        }
        num = num + 1;
    }
    printf ("angka prima ke-%d: %d",input,result);
    return 0;
}
