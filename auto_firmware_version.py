import subprocess

Import("env")


def get_firmware_version():
    try:
        # Git Commit Hash abrufen (Short hash, 7 chars)
        ret = (
            subprocess.check_output(["git", "rev-parse", "--short", "HEAD"])
            .decode("utf-8")
            .strip()
        )
        return ret
    except Exception as e:
        print(f"Warning: Could not get git version: {e}")
        return "unknown"


build_version = get_firmware_version()

print(f"Firmware Revision: {build_version}")

env.Append(BUILD_FLAGS=[f'-D AUTO_VERSION=\\"{build_version}\\"'])
