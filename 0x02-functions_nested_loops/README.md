# 0x02-functions_nested_loops

## Functions and nested loops are essential concepts in C programming

## Functions

*Functions in C are blocks of code that perform a specific task and can be reused throughout the program.*
*They allow code modularity, making it easier to understand, maintain, and debug programs.*
*Functions can take arguments (inputs), perform operations, and return values (outputs).*
**Example:**

```c
// Function declaration
int add(int a, int b) {
    return a + b;
}
// Function call
int result = add(3, 5); // result = 8
```

### Nested Loops

*Nested loops in C refer to the situation where one loop is placed inside another loop.*
*They allow iteration over multiple dimensions, such as rows and columns in matrices or tables.*
**Example of nested loops to print a pattern:**

```c
for (int i = 0; i < 5; i++) { // Outer loop for rows
    for (int j = 0; j < 5; j++) { // Inner loop for columns
        printf("* ");
    }
    printf("\n"); // Move to the next line after each row
