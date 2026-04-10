#!/usr/bin/env bash

. ../../../testdata_tools/gen.sh

use_solution joshua.cpp

compile gen_rand.py
compile gen_ja.py

samplegroup
sample 1
sample 2

group group1 100
include_group sample
tg_manual ../manual_data
tc g1-1 gen_rand n=30
tc g1-2 gen_rand n=50
tc g1-3 gen_rand n=100
tc g1-4 gen_rand n=100
tc g1-5 gen_rand n=100
tc g1-6 gen_ja n=30
tc g1-7 gen_ja n=50
tc g1-8 gen_ja n=100
tc g1-9 gen_ja n=100
tc g1-10 gen_ja n=100
