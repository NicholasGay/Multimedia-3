#!/bin/sh
segments=$(cat segments.out)
cat  $segments > tmp.mp4
cat  manifest_init.mp4 tmp.mp4 > video.mp4
rm tmp.mp4
