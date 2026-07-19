#!/bin/bash

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
AFTERBURNER_DIR="$(cd -- "$SCRIPT_DIR/.." && pwd)"

cmake -S "$AFTERBURNER_DIR" -B "$AFTERBURNER_DIR/build"
