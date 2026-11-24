// grabber.cpp — part of media-grabber-x.

#include "mediagrabberx/grabber.h"

#include <cstdio>

namespace mediagrabberx {

Grabber::Grabber(const std::string& config_path)
    : config_path_(config_path) {}

void Grabber::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Grabber::run() {
    if (verbose_) std::fprintf(stderr, "[media-grabber-x] grabber: run\n");
    // core logic lives here
    return true;
}

}  // namespace mediagrabberx
