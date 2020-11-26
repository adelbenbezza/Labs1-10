#!/bin/sh
for filename in /home/adel/5AS05-partie4/*
do
	if [ -d $filename ]
	then 
		ls $filename
	fi
done
