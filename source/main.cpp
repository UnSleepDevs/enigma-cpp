#include "ui/utils.h"
#include "engine.h"
#include "./ui/raw_mode.h"

int main(int argc, char **argv) {
    auto args = Utils::parse_args(argv, argc);
    RawTerm::enableRawMode();
}
