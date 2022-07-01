#include <stdio.h>                                                                                                                      
/**                                                                                                                                     
* main - Entry point                                                                               
* Return: 0                                                                      
*/                                                                                                                                      
int main(void)                                                                                                                          
{                                                                                                                                       
int i;                                                                                                                                  
long long int ll;                                                                                                                        
char c;                                                                                                                                 
float d;                                                                                                                                
long int l;                                                                                                                             
printf("Size of a char: %i byte(s)\n", sizeof(c));                                                                                     
printf("Size of an int: %i byte(s)\n", sizeof(i));                                                                                     
printf("Size of a long int: %i byte(s)\n", sizeof(l));                                                                                 
printf("Size of a long long int: %i byte(s)\n", sizeof(ll));                                                                            
printf("Size of a float: %i byte(s)\n", sizeof(d));                                                                                  
return (0);                                                                                                                             
} 
