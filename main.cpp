#include <Geode/Geode.hpp>

using namespace geode::prelude;

// ClickFix alpha prototype:
// This build currently provides the Geode settings UI only.
// Gameplay input hooks and the 100 ms early-click correction engine
// are intentionally not enabled until their timing behavior is validated.

$on_mod(Loaded) {
    log::info("ClickFix alpha settings prototype loaded.");
}
