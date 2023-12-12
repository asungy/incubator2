#ifndef CMDLINE_SUBCOMMANDS
#define CMDLINE_SUBCOMMANDS

namespace cmdline {
    namespace run {
        CLI::App* create_subcommand(CLI::App& parent);
    }
}

#endif // CMDLINE_SUBCOMMANDS
