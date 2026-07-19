#!/bin/bash

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
AFTERBURNER_DIR="$(cd -- "$SCRIPT_DIR/.." && pwd)"

rm -rf "$AFTERBURNER_DIR/build"
