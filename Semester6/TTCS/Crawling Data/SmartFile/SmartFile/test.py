from pathlib import Path
import json
import scrapy
from bs4 import BeautifulSoup
from webdriver_manager.chrome import ChromeDriverManager
from selenium import webdriver
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.common.by import By
import time

# url = "https://www.filenori.com/"
url = "https://www.filenori.com/noriNew/home.do"


browser = webdriver.Chrome(
    service=ChromeService(ChromeDriverManager().install()))
browser.implicitly_wait(5)
browser.maximize_window()
browser.get(url)
time.sleep(3)
browser.refresh()


result = browser.execute_script(r"contentsHeaderFN.selectCategory('08', '', '')")
time.sleep(4)
result1 = browser.execute_script(r"contentsList_View(true, 23943798,'N');")

print(result1)
# with open("test.html", "w", encoding="utf-8") as f:
#     f.write(browser.page_source)

time.sleep(32)

# result = browser.execute_script("contentsList_View(true, 23803346,'N');")
# print(result)
# time.sleep(100)