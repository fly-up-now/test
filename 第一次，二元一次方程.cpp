# include <stdio.h> 
# include <math.h>
int main(void)
{
	int a=10;
	int b=100;
	int c=10;
	double delta; //delt��ŵ���b*b-4*a*c
	double x1;    //��ŵ�һԪ���η��̵�����һ����
	double x2;   // ��ŵ�һԪ���η��̵�����һ����
	delta=b*b-4*a*c;
	
	if(delta>0)
	{ 
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a); 
	printf("�ö�Ԫһ�η����������⣬x1=%f,x2=%f\n",x1,x2);
	}
    else if(delta==0)
	{
	x1=-b/(2*a);
	
	x2=x1;
	printf("��һԪ���η�����һ��Ψһ�⣬x1=x2=%f\n",x1);
	}	
	else
	  {
	    printf("�޽�\n") ;
     }
	
	return 0;
} 
