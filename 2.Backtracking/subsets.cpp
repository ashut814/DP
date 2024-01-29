#include<iostream>
using namespace std;

void findSubsets(char *input, char *output, int i , int j){

    // base case
    if(input[i] == '\0'){
        output[j] = '\0'; // Terminate the output string
        if(output[0] == '\0') cout << "NULL" << endl;
        cout << output << endl; // Print the generated subset
        return;
    }

    // rec case

    // take ith letter
    output[j] = input[i]; // Include the current character
    findSubsets(input,output,i+1,j+1); // Recur for the next character
    // exclude ith letter
    findSubsets(input,output,i+1,j); // Exclude the current character

}

int main()
{
    char input[100];
    char output[100];
    cin >> input; // Input the string

    findSubsets(input,output,0,0); // Call the function to find subsets
    return 0;
}
 