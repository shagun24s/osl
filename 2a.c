#include <stdio.h>
#define max 100

int top,stack[max],count;

void push(char x){


      if(top == max-1){
          printf("stack overflow");
      }
      else {
          stack[++top]=x;
          count++;
      }

}

void pop(){

        if(top == -1){
            printf("Empty stack");
        }
        else{
            stack[top--];
        }
}


int main()
{
    int i,num;
    char str[max];
    printf("Enter a string: ");
    scanf("%[^\n]", &str);
    fflush(stdin);

    for(i=0;str[i] != '\0';i++){
        push(str[i]);
    }
    printf("Length of entered string is %d", count);

    printf("\n\nEnter a number:");
    scanf("%d",&num);

    if(count%num==0){
        printf("%d is in the multiples of %d\n\n",count,num);
    }
    else
        printf("%d is not in the multiples of %d\n\n",count,num);

     for(i=0;str[i] != '\0';i++){
        pop(str[i]);
    }

}
