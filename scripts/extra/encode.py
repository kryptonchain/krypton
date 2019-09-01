import requests
import ujson as json
import sys
import binascii

to_address = "QQQ1ULhovJFX6Mau76zUZqXXpcheeaq1hXUdNTjMEBBNQNcH91oSotZNS7jGC9eTZ1QeDctbppKxJ28mtSWLNJiV7DecXMoJu2"
content = "test text"

def rpc(method, params={}):
    base_url = "http://localhost:8070/json_rpc"
    payload = {
        "password": "xxx",
        "jsonrpc" : "2.0",
        "method" : method,
        "params" : params,
        "id" : "blah"
    }

    try:
        response = requests.post(base_url, data=json.dumps(payload)).json()
    except Exception as e:
        print("Doesn't seem like krypton-cli is running. {}".format(response))
        sys.exit(1)

    if 'error' in response:
        print("Failed to talk to server. {}".format(response))
        sys.exit(1)
    return response

r = rpc("sendTransaction", {
    "transfers": [{
        "amount": 10,
        "address": to_address,
    }],
    "fee": 10,
    "anonymity": 3,
    "extra": binascii.hexlify(content.encode()).decode()
})
print(r)
