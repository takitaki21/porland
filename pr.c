	#include <stdio.h>

int stack[100];
int a=0,b=0;
int p;
char c[100];

void push(int i){
	stack[p++]=i;
	i++;
}
int pop() {
	int i;
	p--;
	i=stack[p-1];

	return(i);
}

int main(void){
scanf("%d",c);
printf("output:%d\n",clac(c));
return 0;
}

int clac(char c[]){
	while(1){
		switch(){ 

			case '+':
			a=pop();
			b=pop();
			push(b+a);
			break;

			case '-':
			a=pop();
			b=pop();
			push(b-a);
			break;

			case '*':
			a=pop();
			b=pop();
			push(b*a);
			break;

			case '/':
			a=pop();
			b=pop();
			if  (a==0)
				break;
		
			else{

            push(b/a);
			break;
		}
		}	      
	}
	return pop();
}


