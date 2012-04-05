#!/usr/bin/env python

import sys

if len(sys.argv) < 2:
        sys.exit('Usage: %s <string>' % sys.argv[0])

x = ["%02X" % (ord(x)) for x in sys.argv[1]]

# [hex(ord(x)) for x in "ABCDE"]

print ''.join(x)


