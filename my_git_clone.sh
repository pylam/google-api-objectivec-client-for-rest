#!/bin/sh

#http://stackoverflow.com/questions/8090761/pull-using-git-including-submodule

echo git clone --recursive https://github.com/google/google-api-objectivec-client-for-rest.git 
echo update
git pull
git submodule update --recursive
