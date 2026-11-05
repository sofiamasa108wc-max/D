# ClickFix — alpha settings prototype

Target: Geometry Dash Android 2.2081, Geode loader 5.11.2, ARM64 (`android64`).

## Current status

This is **not a finished gameplay mod**. It only declares the Geode settings UI: master ON/OFF, separate Input Buffer and Click Correction toggles, and a 0–100 ms tolerance slider. The C++ entry point logs that the prototype loaded. It does not yet intercept or correct gameplay inputs, and “all modes” is an intended scope, not a verified compatibility claim.

## Build on GitHub Actions

1. Create a new GitHub repository and upload the contents of this folder (the `mod.json`, `CMakeLists.txt`, `src/`, and `.github/` must be at repository root).
2. Open **Actions** and run **Build ClickFix for Android** (or push to `main`/`master`).
3. When the workflow finishes, open its run and download the `ClickFix-Android64` artifact. It should contain the `.geode` package if compilation succeeds.
4. Copy the `.geode` file to `Android/media/com.geode.launcher/game/geode/mods/` and restart Geometry Dash.

The workflow uses the official Geode build action and targets Android64. A successful CI build proves packaging/compilation only; it does not prove gameplay correction.

## Local build

Install Geode CLI, the matching Geode SDK binaries, and Android NDK, set `ANDROID_NDK_ROOT`, then run:

```sh
geode sdk install-binaries -p android64
geode build -p android64
```

## Next development milestone

Implement and validate the input hooks and timing model before enabling actual click buffering/correction. The planned early-click window is up to 100 ms, but a valid game event/window must be identified to avoid replaying inputs at the wrong time or duplicating them.
