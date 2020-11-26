#!/bin/sh

mkdir imgs
count=1
while [ $count -le $1 ]
do
	url="https://xkcd.com/$count"
	curl $(wget -q -O - $url | grep -o "http.*jpg") > "./imgs/$count"
	count=$((count + 1))

done

eog ./imgs
