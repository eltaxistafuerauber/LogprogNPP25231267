#include<stdio.h>
#include<math.h>
    int main ()
  {
    int l=2;
     float a1,a2,a3,a4,at;
     // area de triagulo grande
     a1=((l*3.0/2*(l))/2);
     //area del rectagulo
     a2=(1.0/4)*l*l*2;
     //area del cudrado
     a3=l*l;
     //area de los triangulos chicos
     a4=l*l/2;
     at= a1+a2+a3+(a4*2);
     float pt,p1,p2,p3,h1,h2;
     //hipotenusa del triangulo
     h1=sqrt((l*l)+(l*l));
     h2=sqrt((l*l)+(3.0/2*l*3.0*l));
     p1=h1+l;
     p2=h2+(3.0/2*l);
     p3=2*((3.0/4*l))+(2*l);
     pt=p1+p2+p3;
     printf("area total de la nave:%.4f\n",at);
     printf("perimetro total de la nave:%.4f\n",pt);
     return 0;





  }
