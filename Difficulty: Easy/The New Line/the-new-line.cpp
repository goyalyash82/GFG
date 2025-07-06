// Function to print each word in new line
void printNewLine() {

    // Your code here
    string str = "Geeks for Geeks";
    for(char& ch : str) {
        if(ch == ' ') {
            ch = '\n';
        }
    }
    cout << str;
}