#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# 
# Author:  Mario S. Könz <mskoenz@gmx.net>
# Date:    06.12.2015 14:25:09 CET
# File:    format.py

import os
import sys
import glob
from pathlib import Path

def main():
    path = ["src", "example", "test"]
    types = ["cpp", "hpp", "cpp.in", "hpp.in"]
    fd = os.path.dirname(sys.argv[0]);
    files = []
    
    for p in path:
        for t in types:
            files += Path("{}/{}".format(fd, p)).glob('**/*.{}'.format(t))
    
    for f in files:
        os.system("clang-format -style=file {0} > temp".format(f))
        # only move temp to f is there's a difference
        os.system("cmp --silent {0} temp || ( cp temp {0}; echo 'formatted {0}' )".format(f))
    os.system("rm temp")
    
if __name__ == "__main__":
    main()
