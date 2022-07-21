#!/bin/bash
FT_USER=$(id -p|grep uid|cut -f 2)
BODY=$(groups $FT_USER | tr " " ",")
echo -e $FT_USER, $BODY
