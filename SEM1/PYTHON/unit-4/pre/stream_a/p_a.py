import json
import random as r
import time 
from datetime import datetime, timezone

SENSORS =['S01','S02','S03','S04','S05']
# 
OUT_FILE= 'events.jsonl'

def iso_utc_now():
    return datetime.now(timezone.utc).isoformat(timespec='seconds').replace('+00.00', 'Z')
    #current data and time is taken 
    # UTC is foreced timezone
    # iosformat - datatime object is convertdd to string
    # where year,month,data,hour,min,sec is kept
    # repllace - UTC offset is replaced with x (Zulu tiem)
    # it is equivalent to UTC
    
    
def make_event(s_id,seq):
    # s_id sensor id , seq - uniqe identifier
    temp = round(r.uniform(22.0,36.0),2)
    # get random temperature between 22 and 36 degree celcius rounded to 2 decimal values
    hum = round(r.uniform(30.0,80.0),2)
    return {
        "s_id": s_id,
        "ts": iso_utc_now(),
        "temp": temp,
        "hum": hum,
        "seq": seq
    }

total_events = 1000
delay = 0.01
seq = 1

with open(OUT_FILE,'a',encoding='utf-8') as f:
    for _ in range(total_events):
        s_id = r.choice(SENSORS)
        event = make_event(s_id,seq)
        f.write(json.dumps(event)+'\n')
        f.flush()  # write buffer to forced to disk immediately
        # consumer can read the event without delay
        seq += 1
        time.sleep(delay)
    
print(f'{total_events} events written to {OUT_FILE}')

































