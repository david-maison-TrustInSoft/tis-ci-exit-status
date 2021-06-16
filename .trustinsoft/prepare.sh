#!/bin/bash

set -e

for i in $(seq 1 100); do echo "POI!"; done

cp $PWD/.trustinsoft/poi.json $PWD/.trustinsoft/config.json

echo "Poiing successful"
