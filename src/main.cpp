// main.cpp — entry point. Wires config and subsystems together.

#include "mediagrabberx/settings.h"
#include "mediagrabberx/grabber.h"
#include "mediagrabberx/sites.h"
#include "mediagrabberx/convert.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    mediagrabberx::Settings settings = mediagrabberx::Settings::load_default();
    mediagrabberx::Grabber grabber(settings.store_path);
    mediagrabberx::Sites sites(settings.store_path);
    mediagrabberx::Convert convert(settings.store_path);
    std::fprintf(stderr, "[media-grabber-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
