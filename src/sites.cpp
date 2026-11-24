// sites.cpp — part of media-grabber-x.

#include "mediagrabberx/sites.h"

#include <cstdio>

namespace mediagrabberx {

Sites::Sites(const std::string& config_path)
    : config_path_(config_path) {}

void Sites::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Sites::run() {
    if (verbose_) std::fprintf(stderr, "[media-grabber-x] sites: run\n");
    // core logic lives here
    return true;
}

}  // namespace mediagrabberx
