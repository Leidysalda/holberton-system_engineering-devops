#!/usr/bin/python3
""" Python script that, using this REST API, for a given employee ID, returns
information about his/her TODO list progress.
"""

from requests import get
from sys import argv


def get_data_employee(empl_id=None):
    """ data employees"""

    response_users = get("https://jsonplaceholder.typicode.com/users/{}"
                         .format(empl_id))
    name_empl = response_users.json().get("name")
    #return(name_empl)

    response_tasks = get("https://jsonplaceholder.typicode.com/todos?userId={}"
                         .format(empl_id))

    count = count2 = 0
    for tasks in response_tasks.json():
        count = count + 1
        if tasks['completed'] is True:
            count2 = count2 + 1
    #return('({}/{})'.format(count2, count))
    print('Employee {} is done with tasks ({}/{}):'.format(name_empl, count2, count))

    for tasks2 in response_tasks.json():
        if tasks2['completed'] is True:
            print('\t{}'.format(tasks2['title']))
    #return('{}'.format(tasks['title']))


if __name__ == '__main__':
    name = get_data_employee(int(argv[1]))
