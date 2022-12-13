#include<stdio.h>


int main(){
int n=0, i;

for(i=100; i>=0; i--){
printf("%05i ", i);
n+=1;
if (n==5){
n=0;
printf("\n");
}

}
return 0;
}
