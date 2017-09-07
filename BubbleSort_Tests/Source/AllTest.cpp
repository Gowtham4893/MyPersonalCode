
#include "CommandLineTestRunner.h"
#include "CommandLineArguments.h"
int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}
