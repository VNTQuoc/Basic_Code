#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, x1, x2;
	printf("Pt bac 2 co dang ax^2+bx+c=0");
	printf("\nnhap vao he so a : "); 
	scanf("%f", &a);
    printf("\nnhap vao he so b : "); 
	scanf("%f", &b);
    printf("\nnhap vao he so c : "); 
	scanf("%f", &c);
	if(a == 0)
	{
		if(b == 0 && c != 0)
		{
			printf("PT vo nghiem");}
		else if(b == 0 && c == 0)
		{
			printf("PT co vo so nghiem\n");
		}	
		else{
			x1 = -c/b;
			printf("PT co 1 nghiem la: ", x1);
		}}
	
	else{
		d = b * b - 4 * a *c;
		if (d < 0)
		{
			printf("PT vo nghiem");}
		else{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("PT co 2 nghiem phan biet: ");
			printf("%.2f", x1);
			printf("%.2f", x2);
		}
		
	}
		return 0;
	

}

