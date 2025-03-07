#include <stdio.h>
#include <math.h>
    int main ()
    {




        int l = 7;
       float pt = (23.0/5* l)+ ((3.14 *7)/2);
        float at,a1,a2,a3;
        a1 =l*l;
        a2 = (1.0/5*l)*(3/5*l);
        a3 = (1.0/5*l)*(1/5*l);
        at = a1=a2=2*a3+pow(((3.14*(l/2))/2),2);
        printf("area total: %.4f\n",at);
        printf("perimetro totalv: %.4f\n",pt);
        return 0;
    }
