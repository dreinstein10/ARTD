#!/bin/bash
export ARTOOLKIT_CONFIG="v4l2src device=/dev/video2 use-fixed-fps=false ! ffmpegcolorspace ! capsfilter caps=video/x-raw-rgb,bpp=24,width=640,height=480 ! identity name=artoolkit ! fakesink"
./nathansTest
