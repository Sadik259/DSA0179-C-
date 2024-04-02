#include <iostream>
#include <cstring>

using namespace std;
string concatenate(string str1, string str2) {
    return str1 + str2;
}
char* concatenate(char arr1[], char arr2[]) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    char* result = new char[len1 + len2 + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "world!";
    char arr1[] = "Good ";
    char arr2[] = "morning!";
    string result_str = concatenate(str1, str2);
    cout << "Concatenated string: " << result_str << endl;

    char* result_arr = concatenate(arr1, arr2);
    cout << "Concatenated character array: " << result_arr << endl;

    delete[] result_arr;

    return 0;
}

