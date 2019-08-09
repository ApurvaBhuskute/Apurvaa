#include<stdio.h>

int main(){
int n;
printf("Enter value of n:");  
scanf("%d",&n);
while(n!=1){
printf("%d\t",n);
if(n%2){
n=n*3+1;
}
else{
n/=2;
} 
}
printf("1");
}

/*apurva@apurva-Vostro-15-3568:~$ gcc 3n+1.c
apurva@apurva-Vostro-15-3568:~$ ./a.out
Enter value of n:12
12	6	3	10	5	16	8	4	2	1*/
