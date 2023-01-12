import os 
from datetime import datetime, timedelta

#path = "fol1"

#def file_dispenser(path, thresh):
#    mod = os.path.getmtime(path)

threshold = datetime.now() - timedelta(minutes=1).timestamp()
print(threshold)