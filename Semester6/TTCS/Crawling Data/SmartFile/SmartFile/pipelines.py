# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


# useful for handling different item types with a single interface
from itemadapter import ItemAdapter

import pymongo

MONGODB_USERNAME = 'root'
MONGODB_PASSWORD = '6VPFv3vTy2x6'
MONGODB_PORT = '27017'
MONGODB_HOST = '3.38.31.225'
DATABASE = "DDE-Crawler-Test"

class DdeKoreaPipeline:
    def __init__(self):
        if MONGODB_USERNAME != '' and MONGODB_HOST != '127.0.0.1':
            self.client = pymongo.MongoClient(
                "mongodb://" + MONGODB_USERNAME + ":" + MONGODB_PASSWORD + "@" + MONGODB_HOST + ":" + str(
                    MONGODB_PORT))
        else:
            self.client = pymongo.MongoClient(
                'mongodb://' + MONGODB_HOST + ':' + MONGODB_PORT)
        self.database = self.client[DATABASE]

    def process_item(self, item, spider):
        collection = self.database[spider.name]
        print("Đã crawl: ", item['url'])
        collection.update_one({'url': item["url"]}, {'$set': item}, upsert=True)
        return item
