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
         setTestCase(testCase);
        int n = inf.readInt(2, 1e6, "n");
        inf.readEoln();
        vector <int> v = inf.readInts(n, 1, 1e6, "A[i]");
        inf.readEoln();       
     }
    inf.readEof();
    return 0;
}


