#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// push function
void push(char ch)
{
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = ch;
    }
}

// pop function
char pop()
{
    return stack[top--];
}

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    // push all characters
    for(i = 0; i < strlen(str); i++){
        push(str[i]);
    }
    // pop to reverse
    printf("Reversed string: ");
    while(top != -1){
        printf("%c", pop());
    }
    return 0;
    
}