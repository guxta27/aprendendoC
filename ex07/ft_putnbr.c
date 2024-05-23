#include <unistd.h>

void ft_putnbr(int nb){

long n = nb;
short i = 0;
char c[10];

if( n < 0 ){
write(1,"-",1);
n = -n;
}

if(n == 0){
c[i] = '0';
i++;
}

while(n != 0) {
c[i]= n % 10 + 48;
n = n / 10;
i++;
} 

while(i >= 0){
i--;
write(1,&c[i],1);
}
}

