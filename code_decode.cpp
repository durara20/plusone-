#include <iostream>

using namespace std;

const char* codes[5] = { "001","10","11","000","01" };
void encrypt(char*);
void decrypt(char*);

int main() {


    
    char word[20];
    char word2[20];
    cout << "Enter word to encrypt: " << endl;
    cin >> word;
    encrypt(word);
    cout << "enter code to decrypt: " << endl;
    cin >> word2;
    decrypt(word2);





};


void encrypt(char* word)
{
    cout << "encrypted: " << endl;

    for (int i = 0; i < strlen(word); i++)
        switch (word[i])
        {
        case 'a':
            cout << codes[0];
            break;
        case 'b':
            cout << codes[1];
            break;
        case 'c':
            cout << codes[2];
            break;
        case 'd':
            cout << codes[3];
            break;
        case 'e':
            cout << codes[4];
            break;
        }

    cout << endl;
}

void decrypt(char* word)
{
    cout << "decrypted: " << endl;

    for (int i = 0; i < strlen(word); i++)
        
    switch (word[i]){
        case '0':
         {
                switch (word[i + 1])
                {
                case '0':
                    switch (word[i + 1])
                    {
                    case '1':
                        cout << 'a';
                        break;
                    case '0':
                        cout << 'd';
                        break;
                    }
                    break;
                case '1':
                    cout << 'e';
                    break;
                }

           i++;
         }
            break;

         case '1':
         {
                switch (word[i + 1])
                {
                case '1':
                    cout << 'c';
                    break;
                case '0':
                {
                    cout << 'b';
                    break;
                }
                break;
                }

           i++;
         }
            break;
       }

    cout << endl;
}



