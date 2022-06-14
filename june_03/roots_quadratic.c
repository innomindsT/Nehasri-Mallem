//finding the rots of quadratic equation
#include<stdio.h>
#include<math.h>
int main() {
	double a,b,c;
	double test,x,root1,root2;
	printf("Enter the coefficients of x^2 ,x and x^0 :");
	scanf("%lf %lf %lf",&a,&b,&c);
	test=b*b-(4*a*c);
	x=2*a;
	if (test>0) { //real and distant roots
		root1=-(b/x)+(sqrt(test)/x);
		root2=-(b/x)-(sqrt(test)/x);
		printf("The real and distant roots are %lf and %lf \n",root1,root2);
		}
	else if(test==0) {
	//ROOTs are real and equal
		root1=-(b/x);
		printf("The roots of the quadratic are real and equal %lf \n",root1);
		}
	else if (test <0){
	//roots are imaginary and distant
	root1=-(b/x);
	root2=sqrt(test)/x;
	
	
	printf("the roots are imaginary and distant %.2lf+i%.2lf and %.2lf-i.2%lf ",root1,root2,root1,-root2);
	}
	return 0;
}
	
