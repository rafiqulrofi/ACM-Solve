#include<stdio.h>


int main(){
	
	while(true)
	{
	

    long int decimalNumber,remainder,quotient;

    int binaryNumber[100],i=1,j;


    printf("\nEnter any decimal number: ");

    scanf("%ld",&decimalNumber);


    quotient = decimalNumber;


    while(quotient!=0){

         binaryNumber[i++]= quotient % 3;

         quotient = quotient / 3;

    }


    printf("\nEquivalent binary value of decimal number %d: ",decimalNumber);

    for(j = i -1 ;j> 0;j--)

         printf("%d",binaryNumber[j]);


}
    return 0;

}
