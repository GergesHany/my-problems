#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int testCaseCount = 1;
    long long sum = 0;
    // make comment on the next two line if the problem single test case
    testCaseCount = inf.readInt(1, 100, "TestCase");
    inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++) {
        setTestCase(testCase);
        int n = inf.readInt(5, 10000, "n");
        sum += n;
        inf.readSpace();
        int q = inf.readInt(5, 10000, "q");
        inf.readEoln();
        vector<int> a = inf.readInts(n, 1, 10000, "a");
        inf.readEoln();
        for(int i=0;i<q;i++){
            int l = inf.readInt(1, n, "l");
            inf.readSpace();
            int r = inf.readInt(l, n, "r");
            inf.readEoln();
        }
        
    }
    ensure(sum <= 100000);
    inf.readEof();
    return 0;
}