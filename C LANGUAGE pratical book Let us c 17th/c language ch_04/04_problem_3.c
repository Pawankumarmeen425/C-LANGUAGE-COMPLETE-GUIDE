/* If the three sides of  a triangle are entered through the keyword ,write a progrm to check weather 
triangle is valid of not. The triangle is valid if the sum of two sides is greater then the largest of
three sides  */
  
  #include<stdio.h>
  
  int main (){
      float a,b,c, large_side, sum_of_two_sides;
      printf("Enter the sides of the triangle: a,b,c respectivaly \n");
      scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b&&a>c){
        sum_of_two_sides=b+c;
        large_side=a;
    }
    else if(b>a&&b>c)
{
    sum_of_two_sides=a+c;
    large_side=b;
}
else{
    sum_of_two_sides=a+b;
    large_side=c;
}
if (sum_of_two_sides>large_side)
{
    printf("The triangle is a vlaid triangle ");
}
else{
    printf("The triangle is a invalid triangle.");
}

  return 0;
  }