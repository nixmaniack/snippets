#!/usr/bin/env python

import urllib2
import json

jdata = json.loads(urllib2.urlopen('http://www.commandlinefu.com/commands/random/json').read())

print "Summary: " + jdata[0]['summary']
print "Command: " + jdata[0]['command']
