#include <iostream>
#include <string>
#include <iomanip>
#include <ios>

using std::cin;     using std::cout;
using std::endl;    using std::string;
using std::setprecision;
using std::streamsize;

int main()
{

    // ask for and read student name
    cout << " please enter your name" << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
    
    // ask for and read midterm and final grade
    cout << " please enter your midterm and final grades :" << endl;
    double midterm ,final;
    cin >>midterm>>final;
    
    // ask for homework grade
    cout << "Please enter your homework grades, "
            "followed by the end-of-file: ";
    // the number and sum of grades so far
    int count = 0;
    double sum = 0;

    // a variable into which to read
    double x; 

    // invariant:
    //  we have read 'count' grades so far, and 
    // 'sum' is the sum of first 'count' grades 

    while (cin >> x) {
        ++count;
        sum += x;
    }
    // write the result
    streamsize prec = cout.precision();
    cout << " your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4*final + 0.4*sum / count
         << setprecision(prec)<<endl;



    return 0;    

}