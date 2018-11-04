#!/bin/bash
mkdir dir1

cd dir1

touch file10

cd ..

mkdir dir2

cd dir2

touch file20

cd ..

touch file1

ln -s dir2/file20 link1