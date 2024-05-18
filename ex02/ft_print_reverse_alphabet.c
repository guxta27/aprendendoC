#include <unistd.h>

 void ft_print_reverse_alphabet(void){
 
  char z; 

  for(z = 'z'; z >= 'a'; z--){
  write(1,&z,1);
  }
}
