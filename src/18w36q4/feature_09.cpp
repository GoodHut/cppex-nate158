#include "feature_set.hpp"
#include "event.hpp"

#define FEATURE_NAME "feat_09"

static void f() {
    kLogInfo(FEATURE_NAME ":" "works");
}

#undef FEATURE_NAME

REGISTER_FEATURE(f);
