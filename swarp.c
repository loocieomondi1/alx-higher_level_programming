#include <stdio.h>

/**variable "t" for temporary use
 * swapping variables
 *
 */
void main()

{

    int a;
    int b;
    int t;

    printf("Enter values of 'A' and 'B' = ");

    scanf("%d%d",&a,&b);

    t=a;

    a=b;

    b=t;

    printf("A=%d B=%d",a,b);

}
