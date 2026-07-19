#!/bin/bash

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
AFTERBURNER_DIR="$(cd -- "$SCRIPT_DIR/.." && pwd)"

cmake --build "$AFTERBURNER_DIR/build" --target afterburner
