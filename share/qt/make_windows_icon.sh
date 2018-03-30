#!/bin/bash
# create multiresolution windows icon
ILMON_DST=../../src/qt/res/icons/novacoin.ico

convert ../../src/qt/res/icons/novacoin-16.png ../../src/qt/res/icons/novacoin-32.png ../../src/qt/res/icons/novacoin-48.png ${ILMON_DST}
