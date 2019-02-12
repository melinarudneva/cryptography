#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

// Encryption using Caesar cipher (shifting number by choosen key)
// we used an ASCII Table
 int main() {
 char message[1000];
 int key,ch;
 
 cout << "Enter a message" << endl;
 cin.getline(message, 1000);
 cout << "Enter a key" << endl;
 cin >> key;
 
 // Size of message
 size_t len = strlen(message);
 
 // read all elements in message and encrypt it
 for(int i = 0; i<len; ++i) {
 ch = message[i];
 
 if((ch>='a')&& (ch <='z')) {
     ch = ch + key;
 
     if(ch>'z') {
         ch = ch - 26;
     }
     
 message[i] = char(ch);
 
    }
 }
 
 cout << message << endl;
 
 return 0;
 }


// Decryption using Caesar cipher (finding the key)
/*int main() {
 char message[1000];
 int key = 0;
 int ch;
 
 cout << "Enter a message" << endl;
 cin.getline(message, 1000);
     
 size_t len = strlen(message);
     
 while(key<27) {
     for(int i = 0; i<len; ++i) {
         ch = message[i];
 
         if((ch>='a')&& (ch <='z')) {
             ch = ch + key;
             
             if(ch>'z') {
                 ch = ch - 26;
                 
             }
             
 message[i] = char(ch);
 
         }
 }
 
     cout << key << " " << message << endl;
     key++;
 }
 cout << message << endl;
 
 return 0;
 }
 */



// Encryption (every letter has another random letter asigned)
    /*int main() {
    char message[1000], ch;
    vector<char> al {'a','b','c','d','e','f','g','h','i','j','k', 'l', 'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<char> helpal = al;
    // shuffle our alphabet to get a new one with a random sequence
    random_shuffle( helpal.begin(), helpal.end() );
    

    cout << "Enter a message" << endl;
    cin.getline(message, 1000);
    
    size_t len = strlen(message);
    for(int i = 0; i<len; ++i) {
            ch = message[i];
        auto pos = find(begin(al), end(al), ch);
        if (pos == al.end()) {}
        else {
        int index = distance(al.begin(), pos);
        message[i] = helpal[index];
    }
    }
    
    cout << message << endl;
    
    cout<< "Alphabet: ";
    for(int i = 0; i < al.size(); i++){
        cout <<al[i];
    }
    cout << endl;
    
    cout<< "Alphabe2: ";
    for(int i = 0; i < helpal.size(); i++){
        cout <<helpal[i];
    }
    cout << endl;
    
    
    return 0;

}*/

