#!/bin/bash
rm link1
rm file1
rm -rf dir1 dir2

echo "Displaying all files and directories after deletion called by script3.sh:"

find . -print