# Computation

## Vocabulary
- Results - the outputs of a program
- Arguments - the inputs to a program
- computation - producing results from arguments
- Abstraction - showing only the interface and hiding the implementation details. 
- Divide and Conquer - a strategy of splitting programs into smaller parts
- Sybmolic Constant - a named object whose value cannot change after initialization
- constexpr - keyword to make an object a symbolic constant.  Value must be known at compile time.
- magic constant - a literal in code that is not defined (ex: using 22/7 in place of pi without an explanation)
- const - a constant whose value does not need to be known at compile time and whose value cannot change after initialization. 
- meaning of 'a'+1 : int{'a'} + 1
- type(value) vs type{value} : both convert value to type, however type{value} prevents narrowing conversion where type(value) does not. 
- expression statements - an expression followed by a semicolon (ex: ++a; x=4)
- declaration statements - a declaration followed by a semicolon (ex: int x)
- block - a compound statement delimited by curly braces
- function - a named sequence of statements
- function definition syntax - type identifier( parameter-list) function body
- formal arguments - a parameter list
- function declaration - 

## lvalue vs rvalue
- if int length = 99
    - length is an lvalue and is "the object named by length" 
    - So, lvalues are the boxes (objects, blocks in memory)
- if int area = length*width, length is an rvalue and is "the value of the object named by length"
    - so rvalues are the values held within the boxs (objects, blocks in memory)

## if and else-if
- are there else-if statements in c++?
    - NO!  only if and else.  The else code executes when the if condition is false leading to a new if and else set of statements. 

## Switch
Details about switch statements
- You can only switch on int, char, or an enumeration type
- the values in the case labels must be constant expressions (cannot use variables) 
- there cannot use the same value for two case labels
- you can use several case labels for a single case
- every case needs to end in a break (or there will be fall through)
- it's good coding practice to have a default case. 