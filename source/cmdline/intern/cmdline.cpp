#include "cmdline/cmdline.hpp"
#include "CLI/App.hpp"
#include "CLI/CLI.hpp"

namespace cmdline {
    int run(int argc, char** argv) noexcept
    {
        CLI::App app;

        try {
            app.parse(argc, argv);
        } catch (const CLI::ParseError &e) {
            return app.exit(e);
        }

        return EXIT_SUCCESS;
    }
}
