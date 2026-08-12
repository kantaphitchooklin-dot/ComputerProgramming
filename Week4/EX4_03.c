#include <stdio.h>

int main() {
     char x ;

     printf("Enter Alphabet : ");
     scanf("%c", &x);

     if(x=='B' || x=='b'){
        printf("YES"); //ป้อนได้แค่Bหรือb
     }
     else{
        printf("NO");
     }
}