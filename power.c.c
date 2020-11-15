#include "myMath.h"


double Exponent(int x)
{
	int i;

	double result = 1 ;


	if (x==0){
		return 1 ;
	}
 

	if (x<0){

		double l = div(1, Power(exp,x*-1));

		return l;
	}


	if(x>0)
	{
		for(i =0;i<x;i++)
		{
			result = exp * result ;

		}
		

	}
	return result;
}


double Power (double x, int y)
{


int i;
double result = 1;

	
	if (x == 0 )
	{
		return 0;
	}
	
	if (y == 0)
	{
		return 1;
	}
	
	if(y<0)
	{
        
		double l = div(1,Power(x,y*-1));
		
		return l;
	}
	 
	
	for(i=0;i<y;i++)
	{
		result = result*x;
	
	}

	return result;

}
			














	













































