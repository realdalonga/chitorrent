#!/bin/bash

FILE=./.git/hooks/pre-commit

if [ -e "$FILE" ]; then
    rm ./.git/hooks/pre-commit
fi

cp ./hooks/pre-commit "$FILE"
