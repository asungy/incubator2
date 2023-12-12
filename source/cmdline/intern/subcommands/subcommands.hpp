#ifndef CMDLINE_SUBCOMMANDS
#define CMDLINE_SUBCOMMANDS

#include "CLI/CLI.hpp"

namespace cmdline {
    namespace run_cmd {
        CLI::App* create_subcommand(CLI::App& parent);
    }
}

#endif // CMDLINE_SUBCOMMANDS
