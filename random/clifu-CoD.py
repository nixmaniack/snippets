#!/usr/bin/env python

from bs4 import BeautifulSoup
import requests
r = requests.get('http://www.commandlinefu.com/commands/random')
soup = BeautifulSoup(r.content)
print soup.find("div", attrs={'class': 'summary'}).string
print soup.find("div", attrs={'class': 'command'}).string

