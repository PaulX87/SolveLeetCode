#include "Two_Sum_1.h"
#include "Palindrome_Number_9.h"
#include <QCoreApplication>

const std::vector<int> for_Two_Sum_1{2,7,11,15};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//--- Two_Sum_1 --
    TwoSum ts;
    ts.printVector(ts.twoSum(for_Two_Sum_1, 9));

//--- Palindrome_Number_9 --
    Palindrom pal;
    cout << (pal.isPalindrome(-121) ? "true" : "false") << endl;

    return a.exec();
}
