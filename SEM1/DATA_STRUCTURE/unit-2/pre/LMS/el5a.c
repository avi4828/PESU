#include <stdio.h>
#include <ctype.h>   // for isalnum()
#include <string.h>

#define MAX 100

char s[MAX];
int top = -1;

// Push element to stack
void push(char c) {
    s[++top] = c;
}

// Pop element from stack
char pop() {
    return s[top--];
}

// Check precedence of operators
int precedence(char c) {
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    // infix_to_postfix(infix, postfix);


    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }

        // If '(', push to stack
        else if (ch == '(') {
            push(ch);
        }

        // If ')', pop until '('
        else if (ch == ')') {
            while (top != -1 && s[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }

        // If operator
        else {
            while (top != -1 && precedence(s[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // end string

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
