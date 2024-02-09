TASK-1:
Create a function that takes an array of numbers arr, a char s and return an array of
numbers as per the following rules: "
- "A" returns a sorted array in ascending order.
-  "D" returns a sorted array in descending order.
- "N" returns an array without any modification.
- Examples
- AscDesNone([4, 3, 2, 1], "A" ) ➞ [1, 2, 3, 4]
- AscDesNone([7, 8, 11, 66], "D") ➞ [66, 11, 8, 7]
- AscDesNone([1, 2, 3, 4], "N") ➞ [1, 2, 3, 4]

TASK-2:
Write a function that returns the frequency of a character in string. Use C-strings.

TASK-3:
Write a function to Remove all Characters including spaces in a String Except Alphabets.
- Example:
- Enter a string: I2love !Programming
- Filtered String: IloveProgramming

TASK-4:
Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array and store the result in an array named tweakedArray and print it in the function.
- Examples:
- tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
- // "p" + 1 => "q";  "p" - 1 => "o";  "e" - 1 =>"d"
- tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"
- tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"
Notes
Don't worry about capital letters.

TASK-5:
Create two functions toCamelCase() and toSnakeCase() that each take a single string and
convert it into either camelCase or snake_case.
- Examples
- toCamelCase("hello_edabit") ➞ "helloEdabit"
- toSnakeCase("helloEdabit") ➞ "hello_edabit"
- toCamelCase("is_modal_open") ➞ "isModalOpen"
- toSnakeCase("getColor") ➞ "get_color"

TASK-6:
- I. int strlength(char A[ ]) : It should return the size of the string
(excluding the null character)
E.g. if A [ ] = {“abcd”} then the function should return 4. Note: The actual
size of the array is 5(due to null).
