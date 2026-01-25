import json
import time 
from collections import defaultdict

IN_FILE = 'events.jsonl'

def follow(f):
    # this is a generator function that yield replaces return
    f.seek(0,2)  # go to the end of file
    # file cursor id moved to the end of the file
    # only new data is processed
    while True:
        line = f.readline()
        if not line:
            time.sleep(0.1)  # sleep briefly
            continue
            # control jumps vack to the loop start after a pauser of 0.1 sec
        yield line
        

counts = defaultdict(int)
total = 0
bed_json = 0
MAX_EVENTS = 1000
with open(IN_FILE,'r',encoding='utf-8') as f:
    for line in follow(f):
        line = line.strip()
        if not line:
            continue
        try:
            event = json.loads(line)
        except json.JSONDecodeError:
            bed_json += 1
            continue
        s_id = event.get('s_id','unknown')
        counts[s_id] += 1
        total += 1
        
        if total%20==0:
            print(f'total {total} records processed , bed records: {bed_json}, counts : {counts}')
        if total>=MAX_EVENTS:
            print('Reached max events , exiting')
            break