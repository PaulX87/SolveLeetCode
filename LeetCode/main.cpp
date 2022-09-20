#include "Two_Sum_1.h"
#include <vector>
#include <QCoreApplication>

const std::vector<int> for_Two_Sum_1{2,7,11,15};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//---Two_Sum_1--
    Solution sol;
    sol.printVector(sol.twoSum(for_Two_Sum_1, 9));

    return a.exec();
}
