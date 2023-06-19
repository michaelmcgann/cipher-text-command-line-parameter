#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string get_cipther(string plaintext, string cipther_alph);
char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, string argv[])

{
    // checking to see if there is exactly one input
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // checking to make sure length of cipther alphabert is 26 characters long
    int len = strlen(argv[1]);
    if (len != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    // checking to make sure all the characters are from the alphabet
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain 26 characters from the alphabet.\n");
            return 1;
        }
    }
    // checking for duplicate characters
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Your input has duplicates.\n");
                return 1;
            }
        }
    }


    string cipther = argv[1];

    // prompting for message that needs ciphering
    string plain_text = get_string("plaintext: ");
    string cipther_text = get_cipther(plain_text, cipther);
    // printing cipher message
    printf("ciphertext: %s\n", cipther_text);

    return 0;
}

// function to charge message to cipher
string get_cipther(string plaintext, string cipther_alph)
{
    int len = strlen(plaintext);
    // iterating over each character in plain text
    for (int i = 0; i < len; i++)
    {
        // iterating through the alphabet
        for (int j = 0; j < 26; j++)
        {
            // testing for upper or lower characters
            if (isupper(plaintext[i]))
            {
                // get the index of the position in alphabet
                if (plaintext[i] == ALPHABET[j])
                {
                    // set value of cipher alphabet at same index to replace plaintext index value
                    plaintext[i] = toupper(cipther_alph[j]);
                    break;
                }
            }
            else
            {
                // get the index of the position in alphabet
                if (plaintext[i] == tolower(ALPHABET[j]))
                {
                    // set value of cipher alphabet at same index to replace plaintext index value
                    plaintext[i] = tolower(cipther_alph[j]);
                    break;
                }
            }
        }
    }
    // return next cipher text
    return plaintext;
}
