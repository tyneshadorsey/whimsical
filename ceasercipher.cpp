
/* Programmer: Ty, Dorsey
>>>> This program will accept a message and key and encrypt using ceaser cipher.
>>> Precondiions: none
>> Inputs: user message in plaintext, int key
> Outputs: user message in ciphertext
*/

#include <iostream>
using namespace std;

int main()
{
    char message [100], ch;
    int i, key;

    cout << "Hello, I am CC!";
    cout << endl;
    cout << " I will encrypt your message into ceaser cipher, so you dont have to.";
    cout << endl;
    cout << " Just enter both your message and your key of choice and 'voila', encryption!";
        system("read"); // waits for user 
    cout<< endl;
    // Get message from user
    cout << "Please enter the message you want to encrypt: ";
    cin.getline(message, 100);

    // Get a key from user 
    cout <<"Please enter a key for encryption: ";
    cin >> key;

    /* Function: accepts the user's input and applies the ceaser cipher algorithm 
    for encryption by cycling through each char of the message and encrypting each
    letter by shifting the alphabet by the number given by user (key) */

    for (i = 0; message [i] != '\0'; ++i){
        ch = message[i];
        if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;

                if (ch > 'z'){
                    ch = ch - 'z' + 'a' - 1;
                }
                message[i]= ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'Z' + 'A' - 1;
            
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
     cout << "I encrypted your message using ROT" << key<<endl;
     cout << "Ciphertext: " << message<<endl;
     cout << endl;
     return 0;
}