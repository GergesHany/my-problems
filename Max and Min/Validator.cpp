#include "testlib.h"
using namespace std;

// inf - stream with the testdata.

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int testCaseCount = 1;
    // make comment on the next two line if the problem single test case
    testCaseCount = inf.readInt(1, 100, "TestCase");
    inf.readEoln();
    for (int testCase = 1; testCase <= testCaseCount; testCase++) {
        setTestCase(testCase);
        long long a = inf.readLong(1, 1'000'000'000'000, "a");
        inf.readSpace();
		long long b = inf.readLong(1, 1'000'000'000'000, "b");
        inf.readSpace();
        long long c = inf.readLong(1, 1'000'000'000'000, "c");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}

