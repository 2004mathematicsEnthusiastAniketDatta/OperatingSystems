#!/bin/bash
<<COMMENT
GENERATE ALL COMBINATIONS OF 1,2 AND 3
NESTED FOR LOOPS
COMMENT
for i in 1 2 3; do
  for j in 1 2 3; do
    for k in 1 2 3; do
      echo "$i $j $k"
    done
  done
done