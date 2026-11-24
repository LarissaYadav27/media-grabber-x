// convert.cpp — part of media-grabber-x.

#include "mediagrabberx/convert.h"

#include <cstdio>

namespace mediagrabberx {

Convert::Convert(const std::string& config_path)
    : config_path_(config_path) {}

void Convert::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Convert::run() {
    if (verbose_) std::fprintf(stderr, "[media-grabber-x] convert: run\n");
    // core logic lives here
    return true;
}

}  // namespace mediagrabberx
