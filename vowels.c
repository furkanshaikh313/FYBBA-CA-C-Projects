#include<math.h>
#include<stdio.h>
    int fact(int index)
    {
    int f = 1, i;
    for(i = 1; i <= index; i ++)
    {
        f = f*i;
    }
    return f;
    }
// Driver Code
int main()
{
    int x = 1;
    int n = 2;
    double sum = 0,   m;
    // Sum of n-1 terms starting from 2nd term
    int i;
    for (i = 1; i <= n; i++) {
    m =  pow(x, i) / fact(i);
    sum = sum + m;
   }
    printf("\n%.4f", sum);
    return 0;
}