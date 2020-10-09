#include<stdio.h>
int add(int a, int b){
    int sum = a + b;
    return sum;
}
 
int subtract(int a, int b){
    return a - b;
}

int mutiply(int a, int b){
    return a * b;
}
 
float devide(int a, int b){
    return (float) a / b;
}
 
int main(){
    printf("Calculation:");
	printf("\n============");
	printf("\n1. Input 2 Interger Number");
	printf("\n2. Calculate Sum");
	printf("\n3. Calculate Substraction");
	printf("\n4. Calculate Multiplication");
	printf("\n5. Calculate Division");
	printf("\n6. Exit\n");
	int i,a,b;
	scanf("%d",&i);
	switch(i){
	case 1:
	printf("\nPlease input the num1:  ");
	scanf("%d", &a);
	printf("\nPlease input the num2:  ");
	scanf("%d", &b);	
		int j;
		scanf("%d",&j);
		switch (j){
			case 2:
    		printf("\n%d + %d = %d", a, b, add(a, b)); 
    		break;
    		case 3:
    		printf("\n%d - %d = %d", a, b, subtract(a, b));
    		break;
    		case 4:
    		printf("\n%d * %d = %d", a, b, mutiply(a, b));
    		break;
   			case 5:
       		printf("\n%d / %d = %f", a, b, devide(a, b));
       		break;
       		case 6:
			break;
			   
}
}
}
