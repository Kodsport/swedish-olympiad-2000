#!/usr/bin/env bash

. ../../../testdata_tools/gen.sh

use_solution joshua.cpp

samplegroup
sample 1
sample 2

group group1 100
include_group sample
tc_manual secret01
tc_manual secret02
tc_manual secret03
tc_manual secret04
tc_manual secret05
tc_manual secret06
tc_manual secret07
tc_manual secret08
