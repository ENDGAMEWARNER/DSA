tring#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// 1. Copies the source string to destination string
int str_copy(char source[], char dest[]) {
    if (source == nullptr || dest == nullptr) {
        return 0; // Unsuccessful
    }
    strcpy(dest, source);
    return 1; // Successful
}

// 2. Checks if suf is a suffix of str
int is_suffix(char str[], char suf[]) {
    int strLen = strlen(str);
    int sufLen = strlen(suf);
    
    if (sufLen > strLen) return 0; // Not a suffix
    
    return strcmp(str + (strLen - sufLen), suf) == 0 ? 1 : 0;
}

// 3. Checks if substr is a substring of str
int is_substring(char str[], char substr[]) {
    return strstr(str, substr) != nullptr ? 1 : 0;
}

// 4. Writes the suffix of length len of str into suf
int get_suffix(char str[], char suf[], int len) {
    int strLen = strlen(str);
    
    if (len > strLen) return 0; // Unsuccessful
    
    strcpy(suf, str + (strLen - len));
    return 1; // Successful
}

// 5. Writes the substring of length len from str starting at start into substr
int get_substring(char str[], char substr[], int start, int len) {
    int strLen = strlen(str);
    
    if (start + len > strLen) return 0; // Unsuccessful
    
    strncpy(substr, str + start, len);
    substr[len] = '\0'; // Null-terminate
    return 1; // Successful
}

// 6. Checks if two strings are the same
int are_strings_equal(char str1[], char str2[]) {
    return strcmp(str1, str2) == 0 ? 1 : 0;
}

// 7. Concatenates two strings into a third string
void concatenate(char str1[], char str2[], char result[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

// 8. Converts all lowercase letters in a string to uppercase
void convert_to_upper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// 9. Breaks a string into words, each word is placed in a new row of the 2D array
void break_into_words(char str[], char words[][50]) {
    int row = 0, col = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            if (col > 0) { // End of a word
                words[row][col] = '\0';
                row++;
                col = 0;
            }
        } else {
            words[row][col++] = str[i];
        }
    }
    if (col > 0) { // Capture last word
        words[row][col] = '\0';
    }
}

int main() {
    // Demonstrating the functions
    char source[100] = "Hi there!";
    char dest[100] = "";
    char suffix[100], substr[100], result[200];
    char words[10][50] = {""};
    
    // str_copy
    cout << "Calling str_copy:\n";
    if (str_copy(source, dest)) {
        cout << "Source: " << source << "\n";
        cout << "Destination: " << dest << "\n";
    }

    // is_suffix
    cout << "\nCalling is_suffix:\n";
    strcpy(suffix, "there!");
    cout << "Is 'there!' a suffix of 'Hi there!'? " << is_suffix(source, suffix) << "\n";
    
    // is_substring
    cout << "\nCalling is_substring:\n";
    strcpy(substr, "Hi");
    cout << "Is 'Hi' a substring of 'Hi there!'? " << is_substring(source, substr) << "\n";

    // get_suffix
    cout << "\nCalling get_suffix:\n";
    if (get_suffix(source, suffix, 6)) {
        cout << "Suffix of length 6: " << suffix << "\n";
    }

    // get_substring
    cout << "\nCalling get_substring:\n";
    if (get_substring(source, substr, 3, 5)) {
        cout << "Substring of length 5 starting from index 3: " << substr << "\n";
    }

    // are_strings_equal
    cout << "\nCalling are_strings_equal:\n";
    char str1[100] = "Hello", str2[100] = "Hello";
    cout << "Are 'Hello' and 'Hello' the same? " << are_strings_equal(str1, str2) << "\n";

    // concatenate
    cout << "\nCalling concatenate:\n";
    concatenate(str1, str2, result);
    cout << "Concatenation of 'Hello' and 'Hello': " << result << "\n";

    // convert_to_upper
    cout << "\nCalling convert_to_upper:\n";
    convert_to_upper(source);
    cout << "Convert 'Hi there!' to upper: " << source << "\n";

    // break_into_words
    cout << "\nCalling break_into_words:\n";
    char sentence[] = "Hello world from C++";
    break_into_words(sentence, words);
    cout << "Words from 'Hello world from C++':\n";
    for (int i = 0; i < 10 && words[i][0] != '\0'; i++) {
        cout << words[i] << "\n";
    }
    
    return 0;
}
