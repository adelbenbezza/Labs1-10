#!/bin/sh
if [ $1 -lt $2 ]
then 
	echo "le nombre $1 est inferieur a $2"
elif [ $1 -gt $2 ]
then 
	echo "le nombre $1 est superieur a $2"
else
	echo "les deux nombres sont egaux"
fi

