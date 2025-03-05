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
- function declaration - declaring but not defining the behavior of a function. ex double sqrt(double);  
    - always ends in a semicolon (like a replacement of the function body)
- range-for-loop - for(int x: v) // means for all integers x in vector v
- member function call - like v.size();
- What is a benefit of reading input using a for loop instead of a while loop? 
    - a for loop restricts the declared variable to the loop body.  A while loop has the value declared outside of the loop.


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

## Vector
```cpp
vector<int> v = {1,2,3,4,5};
vector<int> v1(3); //vector of 3 ints initialized to 0.  Strings initialized to ""
v.size() // returns the number of elements in the vector
v.push_back(6) // v now contains a 6th element whose value is 6

//Read input into a vector of temperatures
vector<int> temps;
for(int temp; cin>>temp;) //keeps reading until a non-int or error is encountered. temp is used for temporary here
    temps.push_back(temp); //pushes the value to the end of the vector. 

sort(temps) //sorts the temperatures

```