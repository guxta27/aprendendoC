#include <unistd.h>

void ft_print_comb2(void){
 
 char a,b,c,d;
 

  for(a = '0'; a <= '9'; a++){
     for(b = '0'; b <= '8'; b ++){
         for(c = '0'; c <= '9'; c++){
  	         for(d= b + 1; d <= '9'; d++){
	   
             if (a != '9' || b != '8' || c != '9' || d != '9') {
   	
                  write(1,&a,1);
                  write(1,&b,1);
                  write(1," ",1);
                  write(1,&c,1);
                  write(1,&d,1);
                  write(1,", ",2);
                 } else {
	                   write(1,&a,1);
                       write(1,&b,1);
                       write(1," ",1);
                       write(1,&c,1);
                       write(1,&d,1);
                   }
               }   
     	   }
       }
   }
}
