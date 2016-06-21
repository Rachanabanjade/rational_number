#include<stdio.h>
#include<conio.h>


//structure data type for rational numbers

typedef struct {
int numerator;
int denominator;
}rational;



//function declarations for making rational, adding , multiplication and equality


rational checkrational (int,int);
rational add_rational(rational,rational);
rational mul_rational (rational,rational);
int equal_rational(rational,rational);





void main()
{
	rational r1 = checkrational (1,3);
	rational r2 = checkrational (2,5);
	rational sum = add_rational(r1,r2);
	rational mul = mul_rational(r1,r2);
	int equality = equal_rational(r1,r2);
	
	printf("the result of addition is  %d / %d \n",sum.numerator,sum.denominator);
	printf(" the result of multiplication is  %d / %d",mul.numerator,mul.denominator);
	printf("\n the result of equality operation is %d ",equality);
}




//function to check whether number is rational or not
rational checkrational(int a,int b)
	{
	
		if(b==0)
		{
			printf("The number is irrational");
		    exit(0);
		}	
		
		rational r_number;
		r_number.numerator=a;
		r_number.denominator=b;
		return r_number;
	}




//function to add_rational
rational add_rational(rational r1,rational r2)
	{
		rational result;
		result.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
		result.denominator=(r1.denominator*r2.denominator); 
		return result;
	}
	


//function to multiply
rational mul_rational(rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.numerator);
	result.denominator=(r1.denominator*r2.denominator);
	return result;
}




//check whether rational number is equal or not
int equal_rational(rational r1,rational r2)
{
	int result;
	if (r1.numerator==r2.numerator && r1.denominator==r2.denominator)
		{
			return 1;
		}
	else
		{
			return 0;
		}
}
