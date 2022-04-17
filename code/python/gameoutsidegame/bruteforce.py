import requests

url = 'http://127.0.0.1:3000/answers'
wl = ['a','b','d','i','j','k','m','o']
for p1 in wl:
    for p2 in wl:
        for p3 in wl:
            for p4 in wl:
                password = {'password': p1 + 'a' + p2 + 'b' + p3 + p4}
                x = requests.post(url,data=password)

#password =  _ a _ b _ _