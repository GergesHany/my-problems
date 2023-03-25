#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    // testCaseCount = inf.readInt(1, 100, "TestCase");
    // inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++) {
       long long n = inf.readLong(1, 1000000000000000000LL, "n");
       inf.readSpace();
       long long s = inf.readLong(1, 1000000000000000000LL, "s");  
       inf.readEoln();
    }
    inf.readEof();
    return 0;
}

