#include <iostream>
#include <string>


using std::cout;    using std::endl;
using std::cin;     using std::string;

int main()
{

    // ask person for the name 
    cout << "enter your name:" <<endl;

    // read the name 
    string name;
    cin >> name;

    // build the greeting
    const string greeting = "Hello, "+name+ "!";

    // number of blanks surrounding the greeting 
    const int pad = 1;

    // total number of rows and coloumns to write 
    const int rows = pad*2+3;
    const string::size_type cols = greeting.size() + pad*2 +2; // 2 for the 2 asterisk characters

    cout << endl; // write a blank to seperate output from the input
    for (int r = 0; r != rows; ++r) {

        string::size_type c=0;

        while (c!= cols) {
            // is it time to write the greeting?
            if (r==pad+1 && c==pad+1) {
                cout <<greeting;
                c+=greeting.size();
            }else{
                // if we are on the border
                if (r == 0 || r == rows-1 || c == 0 || c==cols-1)  // last (or col) is row-1 because interal is half open range [0,rows) and [0,cols)
                cout<<"*";
                else
                    cout<<" ";
                ++c;
            }       
        }
        cout<<endl;
    }
    return 0;
}
