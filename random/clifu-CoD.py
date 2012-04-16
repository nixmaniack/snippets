#!/usr/bin/env python

import urllib2
import json

jdata = json.loads(urllib2.urlopen('http://www.commandlinefu.com/commands/random/json').read())

print
print "Summary: " + jdata[0]['summary']
print
print "Command: $ " + jdata[0]['command']
print
print "Details: " + jdata[0]['url']
