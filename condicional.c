#include<stdio.h>


// ingresa dos numeros enteros, induica si el mayor es divisible por el menor

int main() {

int a,b,resto;

printf("ingresa un numero \n");
scanf("%d", &a);
printf("ingresa otro numero \n");
scanf("%d", &b);

if (a > b){
resto =a%b;
}
else{
    resto=b%a;
}



if(resto==0){
    printf("el resto es divisible \n");
} else{
    printf("el resto no es divisible \n");
}

}
        /*
    if( a / b = 0) {
        printf("el numero mayor es divisibe por el menor \n");
    } else{
        printf("el numero mayor no es divisible por el menor \n");
}
    }


else{
if (b > a && b / a = 0) {
        printf("el numero mayor es divisibe por el menor \n");
     }
     else{
        printf("el numero mayor no es divisible por el menor \n");
     }
}
return 0;
*/
