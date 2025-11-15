#include <stdio.h>
#include <ctype.h>   // for isdigit()

#define MAX 100

int s[MAX];
int top = -1;

// Push to stack
void push(int x) {
    s[++top] = x;
}

// Pop from stack
int pop() {
    return s[top--];
}

int eva_postfix(char postfix[]) {
    int i, a, b;

    for (i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];

        // If operand (number), push to stack
        if (isdigit(ch)) {
            push(ch - '0');   // convert char to integer
        }
        else {
            // Operator → pop two values
            b = pop();
            a = pop();

            switch (ch) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': {
                    int res = 1;
                    for (int j = 0; j < b; j++)
                        res *= a;
                    push(res);
                    break;
                }
            }
        }
    }

    // Final answer on stack
    return pop();
}

int main() {
    char postfix[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    int result = eva_postfix(postfix);

    printf("Result = %d\n", result);

    return 0;
}
