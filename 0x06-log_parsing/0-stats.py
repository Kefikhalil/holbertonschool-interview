#!/usr/bin/python3
""" reads stdin line by line and computes metrics """


import sys


stats = {
    "200": 0, "301": 0, "400": 0, "401": 0,
    "403": 0, "404": 0, "405": 0, "500": 0}
size = 0


def print_log():
    """Prints logs"""
    print("File size: {}".format(size))
    for status in sorted(stats.keys()):
        if stats[status]:
            print("{}: {}".format(status, stats[status]))


if __name__ == "__main__":
    c = 0
    try:
        for line in stdin:
            try:
                items = line.split()
                size += int(data[-1])
                if data[-2] in stats:
                    stats[data[-2]] += 1
            except:
                pass
            if c == 9:
                print_log()
                c = -1
            c += 1
    except KeyboardInterrupt:
        print_log()
        raise
    print_log()
