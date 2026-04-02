// First C++ Program
// Write to code for output : cout << "Hello World";
// C++ is a case sensitive
// We need to write code in main block becuase its a starting point of a program

#include<iostream> // Its is preprocesor directive, Its is a statement and compiler needs its because compiler dont know about cout #include tells to compiler the cout is define in the iostream
using namespace std; // Its is used for define std through namespace because cout define in the namespace std library.

// int main(){
//     cout << "Hello World! " << endl << "Its is used for end line"; //\n or endl is used for line end
//     return 0;
// }

// ----------------------------------------------------------------------------------------

// Variables - Containers to store data = grade = 'A' and grade is identifier and 'A' is a synthetic representation and we mention data types with variables.
// Data Types: int , char , float , bool , double
// Now Computer follow binary number system because it has signal which is based on 0 and 1 so 0/1 is a binary number.
// Mean signal digit can be 0 or 1 so signal digit (1) is a bit and 8 bits is 1 byte example: 0 1 1 0 0 1 0 1

// Now continue to data types of its sizes
// int => 4 bytes
// char => 1 byte
// float => 4 bytes
// bool => 1 byte
// double => 8 bytes

int main(){
    int age = 24;
    cout << age << endl;
    cout << sizeof(age); // sizeof shows the size of its value into bytes

    // We know how the number store in menory but what about the character value? before storing characters in memory it find ASCII value of then convert ASCII value into binary and it store in memory.
    // American Standard Code For Information Interchange its has already decided number of each/every character. Like A = 65, a = 97, so when compiler stores character a so it store its ASCII value in memory.
    char grade = 'A';
    cout << grade << endl;

    // Now what about this value 19.5 its a decimal value or floating value,
    float PI = 3.14f; // 3.14 is a contant value that why i have used CAPITAL WORD for its identifier this is a global appraoch.
    cout << PI << endl;

    // boolean store true (1) or false (0)
    bool isSafe = true;
    cout << isSafe << endl;

    // double its store also a floating point value and by default floating value will be its double type.
    double weight = 50.5;
    cout << weight << endl;

    // We will use that data types in code. And Its a Premitive Data Types
    // ---------------------------------------------------------------------------------------

    // Type Casting - convert data from one type to another type. 
    // Two types: Type Conversion (Its a implicit convertion / automatic) , Type Casting (Its a explicit conversion / maunally)

    // Type Conversion Example:  
        // 1. float 3.14 -> double (Implicit Converstion because float has 4 bytes of size and double has 8 bytes so compiler can convert it easiy)
    // Now convert char value to int:
    char myGrade = 'A'; // Char 1 byte
    int number = myGrade; // Int 8 byte
    cout << number << endl; // so type conversion automatically by compiler and its show a ASCII value of A

    // Type Casting Example:
    // 1. double 100.10 -> int (Explicit Conversion because double has 8 bytes of size and int has 4 bytes so compiler cannot convert it, This is narrowing conversion (large → small type). Compiler can do it implicitly, but it may cause data loss. Therefore, explicit casting is used to make the conversion intentional.
    double price = 100.50;
    int newPrice1 = price; // Compiler converted but lose the data
    int newPrice2 = (int)price; // It is intentional by developer even if data lose
    cout << newPrice1 << " " << newPrice2 << endl;

    // --------------------------------------------------------------------------------------

    // Input in C++ use cin
    int myAge;
    cout << "Enter Age: ";
    cin >> myAge; // Input will store directly into 
    cout << "Age is " << myAge << endl;

    // Operators in C++ LIKE a + b (+ is a operator)
    // 1. Arithimatic (+ - * / %) Use to peform mathimatical calculation
    // 2. Relational (== < <= > >= !=) Use to check relation between two object
    // 3. Logical (&&(AND) ||(OR) !(NOT)) Use to check logical operation between two object

    // 1. Arithimatic
    int a = 6 , b = 4;
    cout << "Sum: " << a+b << endl;
    cout << "Difference: " << a-b << endl;
    cout << "Product: " << a*b << endl;
    cout << "Division: " << a/b << endl; // quotient
    cout << "Remainder/Modulo: " << a%b << endl; // remainder

    // 2. Relational
    // a = 2; - asign
    // 20 == 20 - relation if both is eqaul or not and return true eles false
    cout << (3 < 5) << endl; // true -> 1
    cout << (3 > 5) << endl; // false -> 0
    cout << (3 <= 5) << endl; // true -> 1
    cout << (3 == 3) << endl; // true -> 1
    cout << (3 == 5) << endl; // false -> 0
    cout << (3 != 5) << endl; // true -> 1
    cout << (3 != 3) << endl; // true -> 0

    // 3. Logical
    // - ! (Not) -> True <==> False , False <==> True
    // 3 < 5 =>> It is true statement But if we use !(NOT) so meaning can be change !(3 < 5) now its false and same !(3 > 5) now its true
    cout << !(10 > 5) << endl; // false

    // - || (OR)
    // We use ||(OR) when we have two statements like Statement 1. (True), Statement 2. (False) and we are using ||(OR) Operator so if anyone is true so its return true
    cout << ((2>10) || (10==10)) << endl; // True because False/True is True
    
    // - && (AND)
    // Its says when both statements is True so it returns True
    cout << ((10>=10) && (20>10)) << endl; // True because True/True is True

    // Table of OR
    // Statement1  | Statement12   | Result
    // True            True           True
    // True            False          True
    // False           True           True
    // False           False          False

    // Table of AND
    // Statement1  | Statement12   | Result
    // True            True           True
    // True            False          False
    // False           True           False
    // False           False          False

    // Classification of operators based on operands
    // 1. Binary (Which have 2 operand like (5 + 5) + is a operator) above operaotors arthematic, relational, logical are based on binary operators
    // 2. Unary  (Which work on singal operand)
    //      * Increament ++ => a=a+1 , a+=1, a++ (Increament 1 in value of a)
    //          * Post Increament: a++ -> First do operation then add 1
    //          * Pre Increament: ++a -> First add 1 and then perform its operation
    //      * Decreament -- => a=a-1 , a-=1, a-- (Decreament 1 in value of a)
    //          * Post Decreament: a-- -> Same as above with decrement
    //          * Pre Decreament: --a -> Same as above with decrement
    // 3. Ternary (Its mean 3 operand like a?b:c its a ternary operator)


    // 2. Uniary: 
    // Post Increament
    int postCount = 10;
    int postNewCount = postCount++; // first assign 10 in postNewCount then update value of postCount
    cout << "Post Count " << postCount << " Post New Count " << postNewCount << endl;

     // Pre Increament
    int preCount = 10;
    int preNewCount = ++preCount; // first update value of preCount then assign the updated value into preNewCount
    cout << "Pre Count " << preCount << " Pre New Count " << preNewCount << endl;

    // Post Decrement
    int postValue = 10;
    int postNewValue = postValue--; // first assign 10 in postNewValue then minus value of postValue
    cout << "Post Value " << postValue << " Post New Value " << postNewValue << endl;

     // Pre Decrement
    int preValue = 10;
    int preNewValue = --preValue; // first minus value of preValue then assign the updated value into preNewValue
    cout << "Pre Value " << preValue << " Pre New Value " << preValue << endl;

    
    // 3. Ternary:
    // Its a short hand of if else statement
    100 > 50 ? cout << "100 is greater than 50" << endl : cout << "100 is not greater than 50" << endl; // if condition is true so it print first statement else it print second statement


    return 0;

}

// -------------------- Practice Questions --------------------

// Q1: What is the difference between = and == in C++?

// Q2: What will be the output?
// int a = 5;
// cout << a++ << endl;
// cout << a << endl;

// Q3: Convert char 'B' into its ASCII value using type conversion.

// Q4: What is the difference between float and double?

// Q5: Write a program to take two numbers as input and print their sum, difference, and product.

// Q6: What will be the output?
// cout << ((5 > 3) && (2 < 1)) << endl;
