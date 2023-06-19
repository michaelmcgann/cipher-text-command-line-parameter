Command-line Cipher Program
This program allows you to cipher any text message using a key of 26 unique alphabetical characters provided as a command-line parameter.

How to Use
Compile the program using the make command.

Run the program with a key consisting of a permutation of all 26 letters of the alphabet. For example:


./substitution XYZABCDEFGHIJKLMNOPQRSTUVW
In this example, the key is 'XYZABCDEFGHIJKLMNOPQRSTUVW'. This key tells the program to replace all occurrences of 'A' with 'X', 'B' with 'Y', 'C' with 'Z', and so on.

Once the program is running, enter the text you want to cipher. The program will then display the ciphered text, with all original letters replaced according to the key you provided.

Notes:
The key must be 26 characters long and contain every letter of the alphabet exactly once.
The program is case-insensitive to the key but preserves the case of the input text. For example, with the key 'XYZABCDEFGHIJKLMNOPQRSTUVW', an input of 'abc' would yield 'xyz', while an input of 'ABC' would yield 'XYZ'.
Non-alphabetical characters in the input text are not changed.
This tool provides a simple and fun way to send secret messages or explore the basics of encryption. Enjoy!
