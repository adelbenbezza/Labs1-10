#!/bin/sh

for filename in $1/*
do
	if [ -d $filename ]
	then 
		ls $filename
	fi
done
