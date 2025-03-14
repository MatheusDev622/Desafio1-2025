#include <stdio.h>

int main(){
    int num1,num2;
    puts("Digite o primeiro número");
    scanf("%d",&num1);
    puts("Digite o segundo número");
    scanf("%d",&num2);
    printf("%d e %d\n",num1,num2);
    int dif1 = num1 - num2;
    int dif2 = dif1 * (-1);
       
    while(1){
        dif1++;
        dif2++;
        if(dif1 == 0 || dif2 == 0){
            break;
        }
    }
    if(num1 == num2){
        printf("Os números são iguais");
    }else if(dif1 == 0){
        printf("O maior número é: %d",num2);
    }else{
        printf("O maior número é %d",num1);
    }
    return 0;
}  