#!/usr/bin/env bash

set -eo pipefail

CONTENTS_DIR="${CONTENTS_DIR:-/Applications/Xcode.app/Contents}"

# /Library/Developer/PrivateFrameworks/CoreDeviceAction.framework
# /Library/Developer/PrivateFrameworks/CoreDevice.framework
# /Library/Developer/PrivateFrameworks/CoreSimulator.framework
# /Library/Developer/PrivateFrameworks/Mercury.framework
#

xcframeworks=(
    /Developer/Library/PrivateFrameworks/SimulatorKit.framework
)
# /SharedFrameworks/PreviewsDeveloperTools.framework
#     /SharedFrameworks/PreviewsFoundationHost.framework
#     /SharedFrameworks/PreviewsMessagingHost.framework
#     /SharedFrameworks/PreviewsModel.framework
#     /SharedFrameworks/PreviewsPipeline.framework
#     /SharedFrameworks/PreviewsPlatforms.framework
#     /SharedFrameworks/PreviewsScenes.framework
#     /SharedFrameworks/PreviewsSyntax.framework
#     /SharedFrameworks/PreviewsUI.framework
#     /SharedFrameworks/PreviewsXROSMessaging.framework
#     /SharedFrameworks/PreviewsXROSServices.framework
#     /SharedFrameworks/PreviewsXcodeUI.framework

for xcframework in "${xcframeworks[@]}"
do
    framework_name=$(basename -- "$xcframework")
    framework_name="${framework_name%.*}"
    xcframework="$CONTENTS_DIR/$xcframework/Versions/Current/$framework_name"
    output_dir="Sources/$framework_name"

    mkdir -p "$output_dir"
    ipsw class-dump "$xcframework" -o "$output_dir" --arch x86_64 --headers
done
