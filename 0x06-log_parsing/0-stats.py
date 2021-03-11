#!/usr/bin/python3
""" reads stdin line by line and computes metrics """


import sys
import signal

def printLog(size, logs):
    """ print the log """
    print("File size: {}".format(size))
    for key, value in sorted(logs.items()):
        if value != 0:
            print("{}: {}".format(key, value))

logs = {
    "200": 0, "301": 0, "400": 0, "401": 0,
    "403": 0, "404": 0, "405": 0, "500": 0}
c = 0
size = 0
try:
    for line in sys.stdin:
        if c == 10:
            printLog(size, logs)
            c = 1
        else:
            c = c + 1
        parse = line.split()
        try:
            size = size + int(parse[-1])
        except Exception as o:
            pass
        try:
            for key, value in logs.items():
                if key == parsed[-2]:
                    logs[key] = logs[key] + 1
        except Exception as o:
            pass
    printLog(size, logs)
except KeyboardInterrupt as o:
    printLog(size, logs)
