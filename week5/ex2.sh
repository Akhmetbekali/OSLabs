#!/bin/bash
if test ! -f answer
then
    echo 0 > answer
fi
count=0
while test $count != 22
do
    count=`expr $count + 1`
    n=`tail -1 answer`
    echo `expr $n + 1` >> answer
done
