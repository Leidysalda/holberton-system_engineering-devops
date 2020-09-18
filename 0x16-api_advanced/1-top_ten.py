#!/usr/bin/python3
"""function that queries the Reddit API and returns the number of
subscribers"""
from requests import get


def top_ten(subreddit):
    """Total subscribers"""

    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    headers = {"User-Agent": "google"}
    payload = {"limit": 10}

    r = get(url=url, headers=headers, params=payload)

    if r.status_code == 200:
        r_json = r.json()
        data = r_json.get("data")
        children = data.get("children")

        for data2 in children:
            data2 = data2.get("data")
            title = data2.get("title")
            print(title)
    else:
        print(None)
