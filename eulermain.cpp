//Improved Euler method

#include <iostream.h>
#include <math.h>

float fn(float, float);

void main()
{
	float n,x,y,y0,k,k1,k2,h,x1;
	
	n=10;  //no, of steps
	x=2;    //initail x
	y=0;    //initail y
	x1=1;  //final x

	h= 0.05;  //step size

	for(int i=1; i<=n; i++)
	{
		y0=y;
		k1= fn(x,y);
		y=y0 + h*k1;
		x= x+h;
		k2= fn(x,y);
		k=(k1 + k2)/2;
		y= y0+h*k;
		cout<< "\nx= " << x << "\ny= " << y;
	}	
	
	return;
}

float fn(float x, float y)
{
	return -x-8*(22/7)*y;  //function
}