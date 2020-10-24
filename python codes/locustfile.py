# Locust Load Testing On Github API
    # Requirements:
    #   - Python 3.6+
    #   - Locust 0.14+
    #       - `pip3 install locust`

    # Running Locust:
    # - Run `locust` inside this directory.
    # - Open your browser and go to http://localhost:8089
    # - Input number of users so simulate and users to hatch per second.

    # Locust Documentation: https://docs.locust.io/en/stable/

from locust import HttpLocust, TaskSet, task, between
import json


class Github(TaskSet):
    @task
    def rate_limit(self):
        self.client.get("/rate_limit")

    @task
    def public(self):
        self.client.get("/gists/public")

    @task
    def feeds(self):
        self.client.get("/feeds")

    @task
    def emojis(self):
        self.client.get("/emojis")


class LetsSwarm(HttpLocust):
    host = "https://api.github.com"
    task_set = Github
    wait_time = between(5, 10)