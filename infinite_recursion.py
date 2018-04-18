#! /usr/bin/python
import json

data = "{\"dts0101272558\":{\"violations\":{\"Codecoverage<80\":{\"severity\":2,\"signoff\":null}}}}"
o = json.loads(data)
for key in o:
    print str(key) +" --> "+str(o[key])
