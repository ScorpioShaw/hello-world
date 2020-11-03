# include <stdio.h>
int main ()
{//尝试将任意十进制数转换为二进制数
	int n ; //n为该十进制数 
	int a ; //a = n % 2 
	printf ("请任意输入一个正整数，本程序将会把它转换为二进制数\n") ;
	printf ("由于技术不太成熟，转换出的二进制数应该倒着念，例：8的二进制数为1000，本程序会输出0001,(*^▽^*)\n") ; 
	scanf ("%d",&n) ;	
	while (n > 1)   //针对a为1或0的循环 
	{                //利用n除以2取余 
	  a = n % 2 ;
	  if (a == 1)
	    {
	      printf ("1") ;   
	      n = (n - 1)/2 ;
        }
      else if (a == 0)
        {
          printf ("0") ;
          n = n / 2 ;
		}		
	}
	printf ("1") ;	
	return 0 ;
}
 
