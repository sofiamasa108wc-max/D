#include <Geode/Geode.hpp>

using namespace geode::prelude;

// ClickFix - Alpha prototype
// This version verifies that the mod loads in Geode.
// Gameplay input correction is not implemented yet.

$on_mod(Loaded) {
    log::info("ClickFix alpha settings prototype loaded.");
}
