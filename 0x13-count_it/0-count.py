#!/usr/bin/python3
"""count it
"""

import pprint
import re
import requests

url = 'http://reddit.com/r/{}/hot.json'


def count_elements(subreddit, word_list, hot_list=[], after=None):
    '''count elements'''
    headers = {'User-agent': 'khalil'}
    params = {'limit': 100}
    if isinstance(after, str):
        if after != "STOP":
            params['after'] = after
        else:
            return print_results(word_list, hot_list)

    response = requests.get(url.format(subreddit),
                            headers=headers, params=params)
    if response.status_code != 200:
        return None
    data = response.json().get('data', {})
    after = data.get('after', 'STOP')
    if not after:
        after = "STOP"
    hot_list = hot_list + [post.get('data', {}).get('title')
                           for post in data.get('children', [])]
    return count_words(subreddit, word_list, hot_list, after)


def print_lists(word_list, hot_list):
    '''Print list'''
    count = {}
    for word in word_list:
        count[word] = 0
    for title in hot_list:
        for word in word_list:
            for title_word in title.lower().split():
                if title_word == word.lower():
                    count[word] += 1

    count = {k: v for k, v in count.items() if v > 0}
    words = list(count.keys())
    for word in sorted(words, reverse=True, key=lambda k: count[k]):
        print("{}: {}".format(word, count[word]))