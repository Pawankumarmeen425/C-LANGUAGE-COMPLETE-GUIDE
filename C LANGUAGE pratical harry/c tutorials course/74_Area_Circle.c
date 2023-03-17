#include <stdio.h>
#include<math.h>
float Edistance(int x1,int x2, int y1, int y2){
    // Distance Formula:: d = sqrt((x2-x1)2+(y2-y1)2)
    float dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return dis;
}
float AreaofCircle(float d)
{
float area = 3.14*d*d;
return area;
}
int main()
{
// Take x1,y1,x2,y2 from the user using scanf
int x1,y1,x2,y2;
printf("Enter the first point(x1,y1):\n");
scanf("%d%d",&x1,&y1);
printf("Enter the Second point(x2,y2):\n");
scanf("%d%d",&x2,&y2);
float (*fptr)(int,int,int,int);
fptr = &Edistance;
float d = (*fptr)(x1,x2,y1,y2);
printf("Distance between two pointes::%f\n",d);
float (*ptr)(float );
ptr = &AreaofCircle;
float A = (*ptr)(d);
printf("Area of the Circle %f::\n",A);
    return 0;
}