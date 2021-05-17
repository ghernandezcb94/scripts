#!/bin/bash

fuser -vki  /var/lib/dpkg/lock
rm -f /var/lib/dpkg/lock
dpkg --configure -a
