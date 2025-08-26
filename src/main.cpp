#include "log.hpp"
#include "error.h"

int main(int argc, char *argv[])
{
    try
    {
        info_log(*argv, ": build ID ", BUILD_ID, ", built on ", BUILD_TIME, ", version ", VERSION, "\n");
    }
    catch (std::exception & e)
    {
        error_log("Exception occurred: " + std::string(e.what()) + "\n");
        return EXIT_FAILURE;
    }
    catch (...)
    {
        error_log("Unknown exception occurred\n");
        return EXIT_FAILURE;
    }
}
