#!/usr/bin/python3
"""function that queries the Reddit API and returns the number of
subscribers"""
from requests import get


def number_of_subscribers(subreddit):
    """Total subscribers"""

    url = "https://www.reddit.com/r/{}/about.json".format(subreddit)
    headers = {"User-Agent": "google"}

    r = get(url=url, headers=headers)

    if r.status_code == 200:
        r_json = r.json()
        data = r_json.get("data")
        subscribers = data.get("subscribers")

        return subscribers
    return 0
