from pathlib import Path
import json
import scrapy
from bs4 import BeautifulSoup
from webdriver_manager.chrome import ChromeDriverManager
from selenium import webdriver
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.common.by import By
import time
import requests

import scrapy
from bs4 import BeautifulSoup
from webdriver_manager.chrome import ChromeDriverManager
from selenium import webdriver
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.common.by import By
import time

class QuotesSpider(scrapy.Spider):
    name = "17-smartfile"

    def start_requests(self):
        url = "https://www.smartfile.co.kr/contents/?category1=DOC"
        yield scrapy.Request(url=url, callback=self.parse)

    def parse(self, response):
        print(response.url)
        import requests
        for i in range(1, 421):

            url = "https://www.smartfile.co.kr/contents/contents_list_inc.php"

            payload = "category1=DOC&category2=&s_word=&sort1=&sort2=&limit=0&type=json&page={}&page_su=10&chkcopy=&opr=true&uploader=".format(str(i))
            headers = {
                'Accept': 'application/json, text/javascript, */*; q=0.01',
                'Accept-Language': 'vi,en-US;q=0.9,en;q=0.8',
                'Connection': 'keep-alive',
                'Content-Type': 'application/x-www-form-urlencoded; charset=UTF-8',
                'Cookie': 'PHPSESSID=1k2rn39p6pivuc7m50rduu5um6; _ga=GA1.3.1227861388.1687076830; _gid=GA1.3.574665277.1687076830; _gat=1; wcs_bt=79d0ffc89b3d5:1687086337; _ga_7SVXZ9KJBR=GS1.3.1687086322.2.1.1687086337.45.0.0',
                'Origin': 'https://www.smartfile.co.kr',
                'Referer': 'https://www.smartfile.co.kr/contents/?category1=DOC',
                'Sec-Fetch-Dest': 'empty',
                'Sec-Fetch-Mode': 'cors',
                'Sec-Fetch-Site': 'same-origin',
                'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36',
                'X-Requested-With': 'XMLHttpRequest',
                'sec-ch-ua': '"Not.A/Brand";v="8", "Chromium";v="114", "Google Chrome";v="114"',
                'sec-ch-ua-mobile': '?0',
                'sec-ch-ua-platform': '"Windows"'
            }

            response = requests.request("POST", url, headers=headers, data=payload)

            json_raw_data = json.loads(response.text)

            for da in json_raw_data["list"]:
                if da["flag_adult"] != "1":
                    lst_file = da["file_list"]
                    lst_filename_extension = []
                    for item in lst_file:
                        if len(item.split(".")) > 1:
                            txt = item.split(".")[1].strip()
                            if len(txt) < 5:
                                lst_filename_extension.append(txt)
                            else:
                                pass
                        else:
                            pass
                    dict_data = {}
                    dict_data.update({
                        "url": (da["id"]),
                        "title": da["stitle"],
                        "author": da["nickname2"],
                        "file_info": {
                            "용량": da["size"]
                        },
                        "filename_extension": lst_filename_extension,
                        "list_filenames": lst_file
                    })

                    yield dict_data



