 #include<stdio.h>
 void circle()
 {
 float pie=3.14;
 int radius;
 printf("enter the radius of circle :");
 scanf("%d",&radius);
 float area=(radius*radius*pie);
 printf("the area of the given circle :%f\n",area);
 }
 void square()
 {
 float area;
 printf("enter the area of square :);
 scanf("%d",&area);
 float area=(area*area);
 printf("the area of the given square :%f\n",area);
 }
 void rectriangle()
 {
 float width,lenght;
 printf("enter the value of width :");
 scanf("%d",&width);
 printf("enter the value of lenght :");
 scanf("%d",&lenght);
 float area =(width*height);
 printf("the area of the given rectriangle :%f\n",area);
 }
 void triangle()
 {
 float base,height;
 printf("enter the value of base :");
 scanf("%d",&height);
  printf("enter the value of height :");
 scanf("%d",&base);
 float area =(height*base/2);
 printf("the area of the given triangle :%f\n",area);
 }
 int main()
 {
circle();
square();
rectriangle();
triangle();
 return 0;
 }
