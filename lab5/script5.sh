#!/bin/sh

if [ -d $1 ]
then
	for filename in $1/*
	do
		if [ -d $filename ]
		then 
			ls $filename
		fi
	done
else
	echo "INVALID PATH!!!!"
fi
