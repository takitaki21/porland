#include <stdio.h>
#include <string.h>
int stack[100];
int p=0;


void push(int h , int buff){
	stack[h]=buff;
}
int pop() {
    return stack[--p];
}

int main(){
	int h = 0;	
	int a=0,b=0 ;
	char c[100];
	scanf("%s",c);
	while(h < strlen(c)){
		switch(c[h]){ 

			case '+':
			a=pop();
			b=pop();
			push(0,b+a);
			p=1;
			break;

			case '-':
			a=pop();
			b=pop();
			push(0,b-a);
			p=1;
			break;

			case '*':
			a=pop();
			b=pop();
			push(0,b*a);
			p=1;
			break;

			case '/':
			a=pop();
			b=pop();
            push(0,b/a);
            p=1;
			break;

			default :
			push(p++,(int)c[h]-'0');
		 break;
		}
		h++;
	}
	printf("%d\n",stack[0]);	      
	}



