#!/bin/bash
git status -s  --ignored | tr -d '!' | tr -d ' '
