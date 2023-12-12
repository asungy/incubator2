#include "CLI/CLI.hpp"
#include "subcommands/subcommands.hpp"

namespace cmdline::run_cmd {
    CLI::App* create_subcommand(CLI::App& parent)
    {
        return parent.add_subcommand("run", "Run program");
    }
}
