#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <vector>

using std::cin;             using std::cout;
using std::endl;            using std::string;
using std::setprecision;    using std::vector;
using std::streamsize;      using std::sort;


int main()
{

    // ask for and read student name
    cout << " please enter your name" << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
    
    // ask for and read midterm and final grade
    cout << " please enter your midterm and final grades!! :" << endl;
    double midterm ,final;
    cin >>midterm>>final;
    
    // ask for homework grade
    cout << "Please enter your homework grades, "
            "followed by the end-of-file: ";

    // a variable into which to read
    double x; 
    vector<double> homework;

    while (cin >> x) 
        homework.push_back(x);
    // check that the student entered some homework grade

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0){
        cout << endl << "You must enter your grades. "
                        " please try again." << endl;
        return 1;                
    }   
    
    // sort the grades
    sort(homework.begin(),homework.end());
    
    //compute the median homework
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid]+homework[mid-1] / 2)
                           : homework[mid];
    
    // compute and write the final grades
    streamsize prec = cout.precision();
    cout << " your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec)<<endl;

    return 0;    

}