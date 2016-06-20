#include <stdio.h>


int stack[100];
int a=0,b=0;
int p,i;


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





int main(){
	char buf[5];
	int  n;
	while(1){
		scanf("%s",n);
		switch(n){ 

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
			printf("output:%s\n",pop());
return 0;
		}
		}	      
	}
	return pop();
}


